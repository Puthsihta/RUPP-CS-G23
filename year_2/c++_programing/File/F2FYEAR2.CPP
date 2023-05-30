#include <iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
using namespace std;
class student{
    private:
	  int id;
	  char name[20];
	  float av;
    public:
	  void input();
	  void output();
	  static void heading();
     };
     void student::input()
     {
	cout<<"Input id:";cin>>id;cin.clear();cin.seekg(0,ios::end);
	cout<<"Input name:";cin.get(name,20);
	cout<<"Input av:";cin>>av;
     }
     void student::output()
     {
	cout<<id<<'\t';
	cout.setf(ios::left|ios::fixed|ios::showpoint);
	cout.width(10);
	cout<<name<<'\t';
	cout.precision(2);
	cout<<av<< '\t';
	cout<<endl;
     }
     void student::heading()
     {
       cout<<"\nID\tNAME\t\tAverage\n";
       cout<<"=============================";
       cout<<endl;
     }

int main()
{

	student stu[20];
	for(int i=0;i<5;i++)
	  stu[i].input();
	  cout<<endl;

	 cout<<"\n Save to file\n";
	 ofstream out("stu.bin",ios::binary);
	 if(out.fail())
	   {
	     cout<<"Error in opening file\n";
	     return 0;
	   }
	   out.write((char *)&stu,5*sizeof(student));
	   out.close();

    ifstream fin("stu.bin",ios::binary|ios::in|ios::ate);
    if(fin.fail())
      {
	 cout<<"can not open file\n";
	 return 0;
      }
      cout<<"All students \n";
      student::heading();
      for( int  i=0;i<5;i++)
	{
	   fin.read((char *)&stu,sizeof(student));
	   stu[i].output();
	}
	fin.close();
	
	getch();
	return 0;
}