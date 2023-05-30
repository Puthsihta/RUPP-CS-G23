#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person 
{
	public:
		char *name; 
		int age;	
		char sex;
	public:
		void input();
		void output();
		char *getName()
		{ 
			return name;
		}
};
class Hospital
{
	private:
		int roomNo;
		int bedNo;	
		char illness[40];
	public:
		void input();
		void output();
};
class Patient : private Hospital, public person 
{
	private:
		int day;
		int month;
		int year;
	public:
		void input();
		void output();
};
void person::input() // out of base class use public 
{
	 cout<<"Enter Name : "; 
	 name=new char[20];
	 cin.seekg(0);cin.get(name,20);
	 cout<<"Enter sex : ";cin.seekg(0);
	 cin>>sex;
	 cout<<"Enter age : ";cin>> age;
}
void person::output()
{
  cout<<name<<"\t\t";
  cout<<sex<< "\t" ;
  cout<<age<< "\t" ;
}
void Hospital::input()
{
  cout<<"Room number: ";cin>>roomNo;
  cout<<"Bed number:" ;cin>>bedNo;
  cout<<"Nature of the illness: ";
  cin.seekg(0);
  cin.get(illness,40);
}
void Hospital::output()
{
  cout<<roomNo<< "\t" ;
  cout<<bedNo<< "\t" ;
  cout<<illness<< "\t" ;
}
void Patient :: input()
{
  person::input();
  Hospital::input();
  cout<<"Date of the patient entry: "<<endl;
  cout<<"day: ";cin>>day;
  cout<<"month: ";cin>>month;
  cout<<"year: ";cin>>year;
}
void Patient::output()
{
  person :: output();
  Hospital :: output();
  cout.setf(ios::right);
  cout.fill('0');
  cout.width(2);cout<<day<<"/";
  cout.width(2);cout<<month<<"/";
  cout.width(4);cout<<year;
  cout.fill(' ');
}
void search(Patient a[],int n,char *m);

int main()
{
  int n;
  char na[20];
  cout<< " Number of patients: ";cin>>n;
  Patient *p=new Patient[n];
  
  cout<< "Input data of patient: "<<endl;
  for(int i=0;i<n;i++)
	 {  
	 	cout<<"Patient"<<(i+1)<<" : ";
		p[i].input();
	 }
  cout<< "\nDisplay data of patient: "<<endl;
  cout<<" Name\t\tSex\tAge\tRoom\tBed\tIllness\tDate\n";
  for(int i=0;i<n;i++)
  {
  	p[i].output();
  }
	cout<<"\nName for search:";
	cin.seekg(0);cin.get(na,20);
	cout<<"\nAfter searching:\n";
	search(p,n,na);
}
void search(Patient a[],int n,char *m)
{
  int index=0;
  for(int i=0;i<n;i++)
  if(strcmp(a[i].getName(),m)==0)
  {
	 a[i].output();
	 index++;
  }
  if(index==0)cout<<"search not found"<<endl;
}
