#include <iostream>
#include <conio.h>
using namespace std;
class Person
{
protected:
	int id;
	char name[18];
	char sex;
	int age;
public:
	virtual void input();
	virtual void output();
};
void Person :: input()
{
	cout << "Enter ID : "; cin >> id;
	cout << "Enter Name : "; cin.seekg(0); cin.get(name, 18);
	cout << "Enter Gender : "; cin >> sex;
	cout << "Enter Age : "; cin >> age;
}
void Person :: output()
{
	cout << id << "\t" << name << "\t" << sex << "\t" << age << endl;
}
class Student : public Person
{   
protected:
	int id;
	float en;
	float db;
	float cpp;
public:
	void input();
	void output();
};
void Student :: input()
{
	cout << "Enter ID : "; cin >> id;
	cout << "Enter English Score : "; cin >> en;
	cout << "Enter Database Score : "; cin >> db;
	cout << "Enter C++ Score : "; cin >> cpp;
}
void Student :: output()
{
	cout << id << "\t" << en << "\t\t" << db << "\t\t" << cpp << endl;
}
static void header1()
{
	cout << "\n\t======Info=======\n" ;
	cout << "ID\tName\t\tGender\tAge\n";
}
static void header2()
{
	cout << "\n\t======Score======\n";
	cout << "\nEnglish\t\tDatabase\tC++\n";
}
int main()
{
	int n;
	
	cout << "Enter the number of students : ";  cin  >>   n;
	
	Person *p1;
	p1 = new Person[n];
	Student *st1 = new Student[n];
	
	Person *pnt;
	
	cout << "\n\n------Base Students-------\n\n";
	
	for(int i=0; i<n; i++)
	{
		cout << "\tEnter Student " << i+1 << endl;
		st1[0] = &p1[i];
		st1[1] = &p1[i];
		/*pnt = &p1[i];
		pnt -> input(); */
		
	}
	
	header1();
	
	for (int i=0; i<n; i++)
	{
		pnt = &p1[i];
		pnt -> output();
	}
	
	cout << "\n\n------Derived Students-------\n\n";
	
	for(int i=0; i<n; i++)
	{
		cout << "\tEnter Student " << i+1 << endl;
		pnt = &st1[i];
		pnt -> input();
	}
	
	header2();
	
	for(int i=0; i<n; i++)
	{
		pnt = &st1[i];
		pnt -> output();
	}
	
	/*
	(int i=0; i<2; i++)
	{
		pnt[i] -> input();
	}
	
	Person *ptr;
	
	ptr = &p1;
	header1();
	ptr -> output();
	ptr = &st1;
	header2();
	ptr -> output();
	*/
	
	getch();
	return 0;            
}