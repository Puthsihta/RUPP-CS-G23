#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
	private: int id;
		char name[20];
		float av;
       public:
       student(int i,char *n,float a)
       {
	  id=i;
	  strcpy(name,n);
	  av=a;
       }
       void input()
       {
	 cout<<"Enter id=";cin>>id;
	 cout<<"Enter name=" ;cin.seekg(0);
	 cin.get(name,20);
	 cout<<"Enter av=";cin>>av;
       }
       void output()
       {
	 cout<<id<<"\t" <<name<<"\t" <<av<<"\n";
       }
};
int main()
{
	//student st[];
	  student stu[3]={{student(1,"dara",89.0)},
	  {student(2,"chea",67.0)},{student(3,"hong",77.6)}};
  
	  for(int i=0;i<3;i++)
		 stu[i].output();
		 cout<<endl;

	  for(int i=0;i<3;i++)
		stu[i].input();

	  for(int i=0;i<3;i++)
	  stu[i].output();

  getch();
  return 0;
}