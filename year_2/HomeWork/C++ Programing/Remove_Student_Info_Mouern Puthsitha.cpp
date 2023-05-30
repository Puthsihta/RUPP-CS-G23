#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Student
{
private:
	int id;
	char name[18];
	char sex[6];
	float score;
public:
	//Static
	static void header()
	{
		cout << "\n----------------------------------------------------";
		cout << "\nId\t\tName\t\tSex\t\tScore\n";
		cout << "----------------------------------------------------";
	}
	// Accessory
	int getId()
	{
		return id;
	}
	char *getName()
	{
		return name;
	}
	char *getSex()
	{
		return sex;
	}
	float getScore()
	{
		return score;
	}
	//Imple Function
	void setId(int i) 
	{
		id = i;
	}
	void setName(char *n)
	{
		strcpy(name, n);
	}
	void setSex(char *s)
	{
		strcpy(sex, s);
	}
	void setScore(float sa)
	{
		score = sa;
	}
	
	//Function to Pulb
	void input();
	void output();
};
//
void Student::input()
{
	cout << "\n";
	cout << "\tEnter ID = "; cin >> id;
	cout << "\tEnter Name = "; cin.seekg(0); cin.get(name, 18);
	cout << "\tEnter Gender = "; cin.seekg(0); cin.get(sex, 6);
	cout << "\tEnter Score = ";  cin >> score;
}
//
void Student::output ()
{
	cout << "\n" << getId() << "\t\t" << getName() << "\t\t" << getSex() << "\t\t" << getScore() << endl;
}
void remov(Student s[],int n)
{
	int k;
  	char rev[18];
	  back: 
		  cout << "\n\tEnter Name to Remove = "; cin.seekg(0); cin.get(rev,18);
		  for(int i=0; i<n; i++)
		  {
			if(strcmpi(s[i].getName(),rev) !=0)
			{
			  for(int j=i; j<n-1; j++)
			  {
				s[j] = s[j+1];
			  }
				k=1;
			}
		  }
		  if(k==0)
		  {
			goto back;
		  }
}
int main()
{
	int n;
	cout << "Enter the Number of Students = "; cin >> n;
	Student *st = new Student[n];
	for(int i=0; i<n; i++)
	{
		st[i].input();
	}
	Student::header();
	for(int i=0; i<n; i++)
	{
		st[i].output();
	}
	getch();
	remov(st, n);
	Student::header();
	
	for(int i=0; i<n-1; i++)
	{
		st[i].output();
	}	
	
	getch();
	return 0;
}