#include<iostream>
#include<conio.h>
using namespace std;
	class score{
		public:
			float a;
	};
	class student{
		private:
				score math,eng,kh;
				char name[20],sex;
				float av;
		public:
				void input();
				void output();
				void sort(int n);
	}st[20],alt;

	void student::input()
	{
	  cout<<"Name:";cin.seekg(0);cin.get(name,20);
		cout<<"Sex:";cin>>sex;
		cout<<"Math:";cin>>math.a;
		cout<<"Eng:" ;cin>>eng.a;
		cout<<"Kh:";cin>>kh.a;
		av=(math.a+eng.a+kh.a)/3;
	}
	void student::output()
	{
	cout<<name<<"\t"<<sex<<"\t"<<math.a<<'\t'<<
	eng.a<<'\t'<<kh.a<<'\t'<<av<<endl;
	}
	void student::sort(int n)
	{
	//  student st[20],alt;
	  for(int i=0;i<n;i++)
		 for(int j=i+1;j<n;j++)
			 if(st[i].av<st[j].av)
			 {
			 alt =st[i];
			 st[i]=st[j];
			 st[j]=alt;
			 }
	}

int main()
	{
		//student st[20],alt;
		//clrscr();
		int n;
		cout<<"Input the number of student:";
		cin>>n;
		for(int i=0;i<n;i++)
		{
		cout<<"Input information for student"<<(i+1)<<endl;
			st[i].input();
		}
		alt.sort(n);
		//clrscr();
		cout<<"Name\tSex\tMath\tEng\tKh\tAverage\n";
		for(int i=0;i<n;i++)
			st[i].output();

	getch();
	return 0;
	}
