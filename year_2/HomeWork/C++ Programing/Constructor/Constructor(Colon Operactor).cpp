
#include<conio.h>
#include <iostream>
#include<string.h>
using namespace std;
class student{
    private:
	  int id;
	  char name[20];
	  float av;
    public:
	  student(int i=0,char *n="",float a=0.0)
	  :id(i),av(a)

	  {
	     strcpy(name,n);
	  }
	  void input();
	  void output();
	  static void heading();
};
void student::input()
{
     cout<<"Input id:";cin>>id;
     cout<<"Input name:";cin.seekg(0);cin.get(name,20);
     cout<<"Input av:";cin>>av;

}

void student::output()
{
	cout<<id<<'\t';
	cout.setf(ios::left|ios::fixed|ios::showpoint);
	cout.width(10);
	cout<<name<<'\t';
	cout.precision(2);
	cout<<av<<'\t';
	cout<<endl;
     }
     void student::heading()
     {
       cout<<"\nID\tNAME\t\tAverage\n";
       cout<<"=============================";
       cout<<endl;
     }

int  main()
{
	int n;
	cout<<"Input number of student:";
	cin>>n;
	student *stu = new student[n];
	for(int i=0;i<n;i++)
	  stu[i].input();
	  cout<<endl;
	 
	  student::heading();
	for(int i=0;i<n;i++)
	 stu[i].output();
	 cout<<endl;
	 
	 getch();
	 return 0;
}
