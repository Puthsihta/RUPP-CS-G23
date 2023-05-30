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
	  void output();
	  static void heading();
     };
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
	
	student stu;
    ifstream fin("stu.bin",ios::binary|ios::in|ios::ate);
    if(fin.fail())
      {
	 cout<<"can not open file\n";
	 return 0;
      }
       cout<<"All students backward \n";
      student::heading();
      long n=fin.tellg()/sizeof(student);

      for( int i=n;i>0;i--)
	{
	   fin.seekg((i-1)*sizeof(student),ios::beg);
	   fin.read((char *)&stu,sizeof(student));
	   stu.output();
	}
	fin.close();
	
	getch();
	return 0;

}