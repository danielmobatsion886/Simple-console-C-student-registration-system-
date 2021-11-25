//Prepaired By :-Group Four Members
/* Group-Four				Id number

1-Daniel Mobatsion			5550/0

*/
//online student registration system		Departement of Software Engineering
#include<iostream>
#include<iomanip>
#include<string.h>
#include<cstdlib>
#include<fstream>
#include<stdio.h>
using namespace std;
struct regname{
        char firstname[12];
        char middlename[12];
        char lastname[12];
};
struct studenttype
{
    int id;
    int age;
    char sex;
    int year;
    char section[2];


};
struct r_date{
	 int date;
    int month;
    int year;
};
struct registration{
    regname name;
    studenttype info;
    r_date day;
}coun;
int main(){
	    ;
    char letter;
    int num;
    	string line;
    fstream registu("group4.txt",ios::in | ios::out | ios::ate);// To create a text file document
    ifstream info("information.txt"); // to read the document
     cout<<"\n********Welcome To Wachemo University software Engineering Department*******"<<setw(130)<<endl;
   cout<<"<<<<<<<<Registration office>>>>>>"<<setw(130)<<endl;
   cout<<"\n<<==To see 1st year student information with there scores press <<I>>==>>"<<endl;
   cout<<"\n<<==To register students  please press letter  <<R>> on your keyboard==>>"<<endl;
   cin>>letter;
   cout<<endl;
   switch(letter){
   case 'R' :
   case 'r':
    cout<<"\tTo register first year students <<< press 1 >>>  \n";
	cout<<"\tTo register second year students <<< press 2 >>>  \n";
	cout<<"\tTo exit =====> <<< press 3 >>>  "<<endl;
	cin>>letter;
	cout<<"\n\n";
	if(letter == '1'){
        cout<<"\n How many students do you want to register...?"<<setw(130)<<endl;
        cin>>num;
        registration student[num];
         cout<<"<<==Please Enter your Information==>>  "<<endl;
        for(int i=0; i<num ; i++){
            cout<<" please Enter your First name :- >>>"<<endl;
            cin>>student[i].name.firstname;
			cout<<" please Enter Your middle name :- >>>"<<endl;
           cin>>student[i].name.middlename;
            cout<<"Please Enter Your last name ========>>>"<<endl;
			cin>>student[i].name.lastname;

    do{
            cout<<"\nIf you're male press 'M' or if you're female press 'F'"<<endl;
            cin>>student[i].info.sex;
    }
    while(student[i].info.sex!='F' && student[i].info.sex!='f' && student[i].info.sex!='M' && student[i].info.sex!='m');	//We must insert M or F else doesn't work
cout<<endl;
            cout<<"please enter Your age =====>>> ";
            cin>>student[i].info.age;
            cout<<endl;
           // cout<<"please Enter Your section =====>>>";
           // cin>>student[i].info.section;
            cout<<"please Enter Date / Month / Year respectively "<<setw(130)<<endl;
            cout<<"\ndate,month and year is only valid in date=01 or 02,month=02 and year=2010"<<endl;
			 cin>>student[i].day.date;// The date is valid only 01 & 02
             cin>>student[i].day.month;//The month is valid only 02
             cin>>student[i].day.year;//The year is valid only 2010E.c
            if(student[i].day.date==01 || student[i].day.date==02 && student[i].day.month==02 && student[i].day.year==2010 )

            cout<<"successfully Registered...!"<<endl;
              else
            cout<<"The Registration date is pass..!\n";
             cout<<"\nPlease Enter Your id No========> ";
            cin>>student[i].info.id;
            cout<<"\n\n"<<endl;
        }
        for(int i=0; i<num; i++)
    {
    	for(i=0; i<(num)-1; i++)
    	{
    		if(student[i].info.id>student[i+1].info.id)//To sort Id number Easily
    		{
    			coun=student[i];
    			student[i]=student[i+1];
    			student[i+1]=coun;
			}
		}
	}
	cout<<"   "<<"   full name   "<<"\t\t\t"<<"age"<<"\t\t"<<"sex"<<"\t"<<"id"<<"\t"<<"\n";
	for(int i=0; i<(num); i++){
		cout<<"  " <<i+1<<". "<<student[i].name.firstname<<" "<<student[i].name.middlename<<" "<<student[i].name.lastname<<"\t\t\t"<<student[i].info.age<<"\t\t"<<student[i].info.sex<<"\t"<<student[i].info.id<<"\n"<<endl;
	}
       registu<<"<<<<<<<================= WELCOME TO WACHEMO UNIVERSITY ====================================>>>>>\n\n"<<endl;
       registu<<"<<<<<<<================== DEPARTEMENT OF SOFTWARE ENGINEERING ===============================\n\n"<<endl;
		registu<<"======================== about first year Registered  student information ===================== \n\n"<<endl;
		registu<<"   "<<"   full name   "<<"\t\t\t"<<"age"<<"\t\t"<<"sex"<<"\t\t"<<"id"<<"\t"<<"\n";
		registu<<"__________________________________________________________________________________________________ \n"<<endl;
		for(int i=0; i<(num); i++){
         registu<<"  "<<i+1<<". "<<student[i].name.firstname<<" "<<student[i].name.middlename<<" "<<student[i].name.lastname<<"\t\t\t\t";
	 	registu<<student[i].info.age<<"\t\t";
		 registu<<student[i].info.sex<<"\t\t";
		 registu<<student[i].info.id<<"\t\n";
		// registu<<student[i].info.section<<"\t"<<"\n"<<endl;
		}
	}
else if(letter=='2'){
    cout<<"you can only register 48 and less than 48 students"<<endl;
    cout<<"\n please Enter Your information correctly!"<<endl;
     cout<<"Enter the number of students you want to register "<<endl;
    cin>>num;
    registration student[num];
    for(int i=num; i<=48; i--){			// It can register  48 students Only
    	cout<<endl;
     cout<<"please enter your First name :->>"<<endl;
      cin>>student[i].name.firstname;
	 cout<<"please Enter middle name :- >>>"<<endl ;
	cin>>student[i].name.middlename;
     cout<<"please enter Your last name :- >>>"<<endl;
	  cin>>student[i].name.lastname;

    do{
            cout<<"If you're male press 'M' or if you're female press 'F'"<<endl;
            cin>>student[i].info.sex;
    }
    while(student[i].info.sex!='F' && student[i].info.sex!='f' && student[i].info.sex!='M' && student[i].info.sex!='m');

            cout<<"please enter Your age =====>>> ";
            cin>>student[i].info.age;
            cout<<endl;
            cout<<"please Enter Your section =====>>>";
            cin>>student[i].info.section;
			 cout<<"please Enter Date / Month / Year respectively"<<setw(130)<<endl;
			  cout<<"\ndate,month and year is only valid in date=17 or 18 / month=02 / year=2010"<<endl;
			 cin>>student[i].day.date;
             cin>>student[i].day.month;
             cin>>student[i].day.year;

        if(student[i].day.date==17 || student[i].day.date==18 && student[i].day.month==01 && student[i].day.year==2010 )
        cout<<"successfully Registered...!"<<endl;
            else
            cout<<"The Registration date is pass\n";
             cout<<"\nPlease Enter Your id No :- ";
            cin>>student[i].info.id;
            cout<<"\n\n"<<endl;

    }
     for(int i=0; i<48; i++)
    {
    	for(i=0; i<48-1; i++)
    	{
    		if(student[i].info.id>student[i+1].info.id)
    		{
    			coun=student[i];
    			student[i]=student[i+1];
    			student[i+1]=coun;
			}
		}
	}
	cout<<"   "<<"   full name   "<<"\t\t\t\t"<<"age"<<"\t\t"<<"sex"<<"\t\t"<<"id"<<"\t"<<"section"<<"\t\n";
	for(int i=0; i<(num); i++){
		cout<<"  " <<i+1<<". "<<student[i].name.firstname<<" "<<student[i].name.middlename<<" "<<student[i].name.lastname<<"\t\t\t\t"<<student[i].info.age<<"\t\t"<<student[i].info.sex<<"\t\t"<<student[i].info.id<<"\t"<<student[i].info.section<<"\t"<<"\n"<<endl;
}
	registu<<endl;
       registu<<"<<<<<<<=======================   WELCOME TO WACHEMO UNIVERSITY =============================================\n\n"<<endl;
       registu<<"<<<<<<<====================== DEPARTEMENT OF SOFTWARE ENGINEERING =======================================\n\n"<<endl;
		registu<<"============================ About second year Registered  student information ============================ \n\n"<<endl;
		registu<<"   "<<"   full name   "<<"\t"<<"age"<<"\t\t"<<"sex"<<"\t\t"<<"id"<<"\t"<<"section"<<"\t\n";
		registu<<"_________________________________________________________________________________________________________________ \n"<<endl;
		for(int i=0 ; i<=48; i++){
         registu<<"  "<<i+1<<". "<<student[i].name.firstname<<" "<<student[i].name.middlename<<" "<<student[i].name.lastname<<"\t\t\t\t"<<student[i].info.age<<"\t\t";
		 registu<<student[i].info.sex<<"\t\t";
		 registu<<student[i].info.id<<"\t";
		 registu<<student[i].info.section<<"\t"<<"\n"<<endl;
		}
}
else if(letter=='3'){
    cout<<setw(20)<<"\nThank you for visit .... please back again another time!";
    cout<<endl;
    exit(1);
}

break;

case 'I': // This case is used to read a file from internal storage(harddrive)
case 'i':
	cout<<"   You can see the info below this statement "<<endl;

		if(info.is_open()){
			while (! info.eof() )
    {
      getline (info,line);
      cout << line << endl;
    }
   info.close();
  }
 else
  cout << "Unable to open file";
break;
 default:
	cout<<"wrong input";
}




registu.close();
return 0;
}
