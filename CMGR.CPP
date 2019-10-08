//program: Classroom Manager
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<dos.h>
class stud
{
  int rno;
  char name[30];
  char dob[10];
  char contact[14];
  struct mark
  {
    float computer;
    float english;
    float maths;
    float physics;
    float chemistry;
    float total;
    float average;
    float tothigh;
    float comphigh;
    float chemhigh;
    float enghigh;
    float mathhigh;
    float phyhigh;
    float totavg;
    float compavg;
    float chemavg;
    float engavg;
    float mathavg;
    float phyavg;
  }marks;
 public:
  stud()
  {
	marks.computer=0;
	marks.chemistry=0;
	marks.english=0;
	marks.maths=0;
	marks.physics=0;
	marks.total=0;
	marks.average=0;
  }
  void addstud()
  {
	cout<<"Enter the roll no. of the student:";
	cin>>rno;
	cout<<"Enter the name of the student:";
	gets(name);
	cout<<"Enter the date of birth of the student:";
	gets(dob);
	cout<<"Enter the contact no. of the student:";
	gets(contact);
	cout<<"------------------------------------------------------------------"<<endl;
  }
 void dispstud()
 {
	 cout<<"  "<<rno<<".		";
	 puts(name);
 }
 void dispstuddetail()
 {
	cout<<"Details of student "<<rno<<endl<<endl;
	cout<<"Student name:";
	puts(name);
	cout<<"Student Date of Birth:";
	puts(dob);
	cout<<"Student Contact number:";
	puts(contact);
 }
 int retrno()
 {
    return rno;
 }
 void addmarks()
 {
	cout<<"Enter marks for Computer:";
	cin>>marks.computer;
	cout<<"Enter marks for English:";
	cin>>marks.english;
	cout<<"Enter marks for Maths:";
	cin>>marks.maths;
	cout<<"Enter marks for Physics:";
	cin>>marks.physics;
	cout<<"Enter marks for Chemistry:";
	cin>>marks.chemistry;
	calculate();
 }
 void calculate()
 {
	marks.total=marks.chemistry+marks.computer+marks.english+marks.maths+marks.physics;
	marks.average=marks.total/5;
 }
 float rettotmark()
 {
	return marks.total;
 }
 float retavgmark()
 {
	return marks.average;
 }
 float retcompmark()
 {
	return marks.computer;
 }
 float retchemmark()
 {
	return marks.chemistry;
 }
 float retengmark()
 {
	return marks.english;
 }
 float retmathmark()
 {
	return marks.maths;
 }
 float retphymark()
 {
	return marks.physics;
 }
 void printreport()
 {
  cout<<"				REPORT CARD\n";
  cout<<"================================================================================";
  cout<<"Student Roll No.:"<<rno<<endl;
  cout<<"Student Name:";
  puts(name);
  cout<<"Student Date of Birth:";
  puts(dob);
  cout<<"Student Contact No:";
  puts(contact);
  cout<<endl;
  cout<<"MARKS\n";
  cout<<"========="<<endl;
  cout<<"Subject   Your Marks(Out of 100)\n\n";
  cout<<"Chemistry:         "<<marks.chemistry<<endl;
  cout<<"Computer:          "<<marks.computer<<endl;
  cout<<"English:           "<<marks.english<<endl;
  cout<<"Maths:             "<<marks.maths<<endl;
  cout<<"Physics:           "<<marks.physics<<endl<<endl;
  cout<<"TOTAL MARKS:       "<<marks.total<<endl<<endl;
  cout<<"Percentage: "<<(marks.total/500)*100<<"%"<<endl;
  cout<<"Average Marks:"<<marks.average<<endl;
  cout<<"Grade:      ";
  if(marks.average>=90)
  {
   cout<<"A+"<<endl;
  }
  else if(marks.average>=80)
  {
   cout<<"A"<<endl;
  }
  else if(marks.average>=70)
  {
   cout<<"B"<<endl;
  }
  else if(marks.average>=60)
  {
   cout<<"C"<<endl;
  }
  else if(marks.average>=50)
  {
   cout<<"D"<<endl;
  }
  else
  {
   cout<<"F"<<endl;
  }
  cout<<"Remarks:";
  if(marks.average>=90)
  {
   cout<<"EXCELLENT!"<<endl;
  }
  else if(marks.average>=80)
  {
   cout<<"VERY GOOD!"<<endl;
  }
  else if(marks.average>=70)
  {
   cout<<"GOOD."<<endl;
  }
  else if(marks.average>=60)
  {
   cout<<"NEEDS IMPROVEMENT.";
  }
  else if(marks.average>=50)
  {
   cout<<"JUST PASSED.COULD HAVE DONE MUCH BETTER."<<endl;
  }
  else
  {
   cout<<"FAILED!!VERY POOR PERFORMANCE!"<<endl;
  }

  cout<<"********************************************************************************";
 }
};
void addstudent(stud);
void deletestudent(stud);
void displaystudents(stud);
void displaystudentdetails(stud);
void modifystudent(stud);
void entermarks(stud);
void classstats(stud);
void studentstats(stud);
void getreportcard(stud);
int countstudents(stud);

void main()
{
  clrscr();
  int ch1,ch2,ch3,ch4;
  stud s;
  cout<<"================================================================================"<<endl;
  cout<<"\n\n\n\n\n\n\n\n                                  CLASSROOM\n   			           MANAGER"<<endl<<endl<<endl;
  cout<<"\n\n\n\n\n\n\n\n================================================================================"<<endl;
  getch();
  clrscr();
  do
  {
   clrscr();
   cout<<"		MENU\n		======\n\n";
   cout<<"            1.STUDENTS"<<endl;
   cout<<"	    2.PERFORMANCE"<<endl;
   cout<<"	    3.REPORT CARD"<<endl;
   cout<<"	    4.ABOUT THE PROGRAM"<<endl;
   cout<<"	    5.EXIT"<<endl<<endl;
   cout<<"  Select an option:";
   cin>>ch1;
   if(ch1==1)
   {
    clrscr();
    do
    {
     clrscr();
     cout<<"		STUDENTS\n		=========\n\n";
     cout<<"	     1.ADD STUDENTS"<<endl;
     cout<<"	     2.REMOVE STUDENT"<<endl;
     cout<<"             3.LIST OF STUDENTS"<<endl;
     cout<<"	     4.VIEW STUDENT DETAILS"<<endl;
     cout<<"	     5.UPDATE DETAILS"<<endl;
     cout<<"	     6.BACK TO MAIN MENU"<<endl<<endl;
     cout<<"  Select an option:";
     cin>>ch2;
     if(ch2==1)
     {
	addstudent(s);
	 }
	 else if(ch2==2)
	 {
	    deletestudent(s);
     }
     else if(ch2==3)
     {
	    displaystudents(s);
	 }
	 else if(ch2==4)
	 {
		displaystudentdetails(s);
	 }
	 else if(ch2==5)
	 {
		modifystudent(s);
	 }
    }while(ch2<6);
   }
   else if(ch1==2)
   {
    do
    {
     clrscr();
     cout<<"		PERFORMANCE\n		============\n\n";
     cout<<"	     1.ENTER MARKS OF STUDENT"<<endl;
     cout<<"	     2.CLASS STATISTICS"<<endl;
     cout<<"             3.STUDENT STATISTICS"<<endl;
     cout<<"	     4.BACK TO MAIN MENU"<<endl<<endl;
     cout<<"  Select an option:";
     cin>>ch3;
     if(ch3==1)
     {
	entermarks(s);
	 }
	 else if(ch3==2)
	 {
		classstats(s);
	 }
	 else if(ch3==3)
	 {
	    studentstats(s);
	 }

    }while(ch3<4);
   }
  else if(ch1==3)
  {
    getreportcard(s);
  }
  else if(ch1==4)
  {
	clrscr();
	cout<<"Program Name:Classroom Manager"<<endl;
	cout<<"Version:1.0"<<endl;
	cout<<"Created by:Sharan M.Varma,Vishnu Balachander,Arjun S.Menon"<<endl;
	cout<<"Copyright (c) 2017, SVA."<<endl<<endl;
	cout<<"About the Program:"<<endl<<endl;
	cout<<"This Program as its name suggests,helps you to manage a classroom efficiently.\n";
	cout<<"\nSelecting Option 1.STUDENTS gives you the option to store student names into theclass,";
	cout<<"Add and update their details,view their details,modify details and also todelete them.\n";
	cout<<"\nSelecting option 2.PERFORMANCE allows you to enter the marks of the students forvarious ";
	cout<<"subjects.We then process these marks and provide you with all the stats for both the";
	cout<<"class and students.\n\nSelecting option 3.REPORT CARD generates a report card for a particular\n";
	cout<<"based on the marks and details you have entered for that particular student.";
	cout<<"\n\nAll searches in the program are based on roll no.If you dont know the roll no ofa student";
	cout<<" you can search for it in: STUDENTS->LIST OF STUDENTS.";
	getch();
  }
  }while(ch1<5);
  cout<<" Press any key to exit.";
  getch();
}
void addstudent(stud s)
{
	clrscr();
	int i,n1;
	cout<<"Enter the no. of students you want to enter:";
	cin>>n1;
	cout<<"-----------------------------------------------------------------\n";
	ofstream f1;
	f1.open("class.dat",ios::binary|ios::app);
	for(i=0;i<n1;i++)
	{
	   s.addstud();
	   f1.write((char*)&s,sizeof(s));
	}
	f1.close();
	cout<<endl<<"Names added!";
	getch();
}
void deletestudent(stud s)
{
	clrscr();
	int drno,rrno1,flag;
	cout<<"Enter the roll no. of the student you want to delete:";
	cin>>drno;
	ifstream fr1("class.dat",ios::binary);
	ifstream f2("class.dat",ios::binary);
	ofstream f3("temp.dat",ios::binary);
	flag=0;
	while(fr1.read((char*)&s,sizeof(s)))
	{
		rrno1=s.retrno();
		if(drno==rrno1)
		{
		  flag=1;
		  break;
		}
	}
	fr1.close();
	if(flag==1)
	{
	    while(f2.read((char*)&s,sizeof(s)))
	    {
		    rrno1=s.retrno();
		    if(rrno1!=drno)
		    {
			    f3.write((char*)&s,sizeof(s));
		    }
	    }
	    f2.close();
	    f3.close();
		remove("class.dat");
		rename("temp.dat","class.dat");
		cout<<endl<<"Deleting Student";
		for(int i=1;i<=3;i++)
		{
			cout<<".";
			sleep(1);
		}
		cout<<"Student deleted!"<<endl;
	}
	   if(flag==0)
	    {
	     cout<<"The student you searched for was not found!";
	    }
	getch();
}
void displaystudents(stud s)
{
	clrscr();
	int k;
	k=countstudents(s);
	cout<<"\n\n\n\n\n\n\n				 Fetching Names\n				       ";
	for(int i=1;i<=3;i++)
	{
		cout<<".";
		sleep(1);
	}
	clrscr();
	if(k==0)
	{
	 cout<<"There are no students in the class yet! Go add some students in:\n students->addstudents";
	}
	else
	{
	 cout<<"No of students in the class:"<<k<<endl<<endl;
	 cout<<"Roll No.      Name"<<endl<<endl;
	 ifstream f4("class.dat",ios::binary);
	 while(f4.read((char*)&s,sizeof(s)))
	 {
		 s.dispstud();
	 }
	 f4.close();
	}
	getch();
}
void displaystudentdetails(stud s)
{
	clrscr();
	int srno,rrno2,flag;
	cout<<"Enter the roll no. of the student whose details you wish to see:";
	cin>>srno;
	clrscr();
	cout<<"\n\n\n\n\n\n\n			      Fetching Student Details\n		           		";
	for(int i=1;i<=3;i++)
	{
		cout<<".";
		sleep(1);
	}
	clrscr();
	ifstream fr3("class.dat",ios::binary);
	flag=0;
	while(fr3.read((char*)&s,sizeof(s)))
	{
		rrno2=s.retrno();
		if(srno==rrno2)
		{
		  flag=1;
		  break;
		}
	}
	fr3.close();
	if(flag==0)
	{
		cout<<"The student you searched for was not found!";
	}
	if(flag==1)
	{
	ifstream f5("class.dat",ios::binary);
	while(f5.read((char*)&s,sizeof(s)))
	{
		rrno2=s.retrno();
		if(srno==rrno2)
		{
			s.dispstuddetail();
		}
	}
	f5.close();
	}
	getch();
}
void modifystudent(stud s)
{
	clrscr();
	int urno,rrno3,flag;
	cout<<"Enter the roll no. of the student whose data is to be updated:";
	cin>>urno;
	flag=0;
	ifstream f6("class.dat",ios::binary);
	while(f6.read((char*)&s,sizeof(s)))
	{
		rrno3=s.retrno();
		if(rrno3==urno)
		{
			flag=1;
			break;
		}
	}
	clrscr();
	cout<<"Searching for student";
	for(int i=1;i<=3;i++)
	{
		cout<<".";
		sleep(1);
	}
	if(flag==0)
	{
		cout<<"Student not found!";
	}
	if(flag==1)
	{
	    cout<<"Student Found!";
	    getch();
	    clrscr();
	    ifstream f7("class.dat",ios::binary);
	    ofstream f11("temp.dat",ios::binary);
	    while(f7.read((char*)&s,sizeof(s)))
	    {
		    rrno3=s.retrno();
		    if(rrno3==urno)
		    {
			  cout<<"Student's current details:"<<endl;
			  s.dispstuddetail();
			  cout<<endl<<endl;
			  cout<<endl<<"Now enter the new details:"<<endl;
			  s.addstud();
			  f11.write((char*)&s,sizeof(s));
		     }
		     else
		     {
			  f11.write((char*)&s,sizeof(s));
		     }
		}
		clrscr();
		cout<<"\n\n\n\n\n\n\n				Updating Details\n		         	       ";
		for(int i=1;i<=3;i++)
		{
			cout<<".";
			sleep(1);
		}
		cout<<"\n\n                                Details updated!";
		f7.close();
		f11.close();
		remove("class.dat");
		rename("temp.dat","class.dat");
	}
	getch();
}
void entermarks(stud s)
{
	clrscr();
	int mrno,rrno4,flag;
	cout<<"Enter the roll no. of the student whose marks you want to enter:";
	cin>>mrno;
	ifstream fr4("class.dat",ios::binary);
	flag=0;
	while(fr4.read((char*)&s,sizeof(s)))
	{
		rrno4=s.retrno();
		if(rrno4==mrno)
		{
			flag=1;
			break;
		}
	}
	fr4.close();
	cout<<endl<<"Searching for student";
	for(int j=1;j<=3;j++)
	{
		cout<<".";
		sleep(1);
	}
	if(flag==0)
	{
		cout<<"The student you searched for was not found!";
	}
	if(flag==1)
	{
		cout<<"Student Found!";
		getch();
		clrscr();
		ifstream f8("class.dat",ios::binary);
	    ofstream f12("temp.dat",ios::binary);
	    while(f8.read((char*)&s,sizeof(s)))
	    {
		    rrno4=s.retrno();
		    if(rrno4==mrno)
		    {
			    cout<<endl<<"Now enter the marks of the student:"<<endl;
			    s.addmarks();
			    f12.write((char*)&s,sizeof(s));
		    }
		    else
		    {
			    f12.write((char*)&s,sizeof(s));
		    }	
	    }
	    cout<<endl<<"Marks added!";
	    f8.close();
	    f12.close();
	    remove("class.dat");
	    rename("temp.dat","class.dat");
    }
    getch();
}
void classstats(stud s)
{
	clrscr();
	cout<<"\n\n\n\n\n\n\n				Processing Data\n				      ";
	for(int i=1;i<=3;i++)

	{
		cout<<".";
		sleep(1);
	}
	clrscr();
	cout<<"\n\n\n\n\n\n\n				Fetching Statistics\n			        	";
	for(int j=1;j<=3;j++)
	{
		cout<<".";
		sleep(1);
	}
	clrscr();
		float sumavgmark=0,highmark=0,sumchemmark=0,sumcompmark=0;
		float sumengmark=0,sumphymark=0,summathmark=0;
		float rtotmark,ravgmark,rcompmark,rchemmark,rengmark,rmathmark,rphymark;
		float comphigh=0,chemhigh=0,enghigh=0,mathhigh=0,phyhigh=0;
		int nstud=0;
		ifstream f9("class.dat",ios::binary);
		while(f9.read((char*)&s,sizeof(s)))
		{
			rtotmark=s.rettotmark();
			ravgmark=s.retavgmark();
			rcompmark=s.retcompmark();
			rchemmark=s.retchemmark();
			rengmark=s.retengmark();
			rmathmark=s.retmathmark();
			rphymark=s.retphymark();
			nstud++;
			sumavgmark+=ravgmark;
			sumchemmark+=rchemmark;
			sumcompmark+=rcompmark;
			sumengmark+=rengmark;
			summathmark+=rmathmark;
			sumphymark+=rphymark;
			if(rtotmark>highmark)
			{
				highmark=rtotmark;
			}
			if(rchemmark>chemhigh)
			{
				chemhigh=rchemmark;
			}
			if(rcompmark>comphigh)
			{
				comphigh=rcompmark;
			}
			if(rengmark>enghigh)
			{
				enghigh=rengmark;
			}
			if(rmathmark>mathhigh)
			{
				mathhigh=rmathmark;
			}
			if(rphymark>phyhigh)
			{
				phyhigh=rphymark;
			}
		}
		f9.close();
		cout<<"These are the statistics of all the marks in the class:"<<endl<<endl;
		cout<<"Average marks of the class:"<<sumavgmark/nstud<<endl;
		cout<<"Highest Total:"<<highmark<<endl<<endl;
		cout<<"Highest mark in chemistry:"<<chemhigh<<endl;
		cout<<"Class average in chemistry:"<<sumchemmark/nstud<<endl<<endl;
		cout<<"Highest mark in computer:"<<comphigh<<endl;
		cout<<"class average in computer:"<<sumcompmark/nstud<<endl<<endl;
		cout<<"Highest mark in english:"<<enghigh<<endl;
		cout<<"Class average in english:"<<sumengmark/nstud<<endl<<endl;
		cout<<"Highest mark in maths:"<<mathhigh<<endl;
		cout<<"Class average in math:"<<summathmark/nstud<<endl<<endl;
		cout<<"Highest mark in physics:"<<phyhigh<<endl;
		cout<<"Class average in physics:"<<sumphymark/nstud<<endl;
		getch();
	}



void studentstats(stud s)
{
		clrscr();
		int msrno,rrno5,flag;
		float scompmark,schemmark,sengmark,smathmark,sphymark,stotmark,savgmark;
		cout<<"Enter the roll no. of the student whose mark stats you wish to view:";
		cin>>msrno;
		cout<<"Searching For Student";
		for(int i=0;i<=3;i++)
		{
			cout<<".";
			sleep(1);
		}
		ifstream fr5("class.dat",ios::binary);
		flag=0;
		while(fr5.read((char*)&s,sizeof(s)))
		{
			rrno5=s.retrno();
			if(rrno5==msrno)
			{
				flag=1;
				break;
			}
		}
		fr5.close();
		if(flag==0)
		{
			cout<<"The student you searched for was not found!";
		}
		if(flag==1)
		{
			cout<<"Student Found!";
			getch();
			clrscr();
			cout<<"				Processing Data\n					";
	        for(int i=1;i<=3;i++)
	        {
		         cout<<".";
		        sleep(1);
	        }      
	        clrscr();
	        cout<<"				Fetching Statistics\n					";
		for(int j=1;j<=3;j++)
	        {
		         cout<<".";
			sleep(1);
		}
			ifstream f10("class.dat",ios::binary);
		    while(f10.read((char*)&s,sizeof(s)))
		    {
			    rrno5=s.retrno();
			if(rrno5==msrno)
			    {
		    scompmark=s.retcompmark();
		    schemmark=s.retchemmark();
		    sengmark=s.retengmark();
		    smathmark=s.retmathmark();
		    sphymark=s.retphymark();
		    stotmark=s.rettotmark();
		    savgmark=s.retavgmark();
		    cout<<endl;
		    s.dispstud();
			}
		    }
		    f10.close();
		    cout<<endl<<"Here are the marks of the student:"<<endl<<endl;
		    cout<<"Marks for computer:"<<scompmark<<endl;
		    cout<<"Marks for chemistry:"<<schemmark<<endl;
		    cout<<"Marks for english:"<<sengmark<<endl;
		    cout<<"Marks for maths:"<<smathmark<<endl;
		    cout<<"Marks for physics:"<<sphymark<<endl<<endl;
		    cout<<"Total marks of student:"<<stotmark<<endl;
		    cout<<"Average marks of student:"<<savgmark<<endl;
		}
		getch();
}
void getreportcard(stud s)
{
	clrscr();
	int rcrno,rrno,flag=0;
	cout<<"Enter the roll no. of the student whose report card you wish to view:";
	cin>>rcrno;
	cout<<"Searching for student";
	for(int i=1;i<=3;i++)
	{
		cout<<".";
		sleep(1);
	}
	ifstream fr2("class.dat",ios::binary);
	while(fr2.read((char*)&s,sizeof(s)))
	{
		rrno=s.retrno();
		if(rcrno==rrno)
		{
			flag=1;
			break;
		}
	}
	fr2.close();
	if(flag==0)
	{
		cout<<"Student not found!";
		getch();
	}
	if(flag==1)
	{
		cout<<"Student found!";
		getch();
		clrscr();
		cout<<"\n\n\n\n\n				Generating Report Card\n					";
		for(int j=1;j<=3;j++)
		{
			cout<<".";
			sleep(1);
		}
		clrscr();
		ifstream f13("class.dat",ios::binary);
		while(f13.read((char*)&s,sizeof(s)))
		{
			rrno=s.retrno();
			if(rcrno==rrno)
			{
				s.printreport();
				getch();
			}
		}
	}
}
int countstudents(stud s)
{
 int k=0;
 ifstream f14("class.dat",ios::binary);
 while(f14.read((char*)&s,sizeof(s)))
 {
   k++;
 }
 f14.close();
 return k;
}
