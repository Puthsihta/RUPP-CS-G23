// Write in CodeBlock IDE
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Teacher
{
private:
	int ID;
	char name[18];
	char sex;
	double salary;
public:
	void input()
	{
		cout << "Enter ID : "; cin >>  id;
		cout << "Enter Name : "; cin.seekg(0);
	 	cin.get(name,18); 
		cout << "Enter Gender : ";  cin >>  sex;
		cout << "Enter Salary : "; cin >>  salary;
		
	}
	void output()
	{
		cout << "ID\t\tName\t\tGender\t\tSalary\n" << endl;
		cout << id <<  "\t\t" << name << "\t\t" << Gender  << "\t\t" << salary << endl;
	}
	void update()
	{
		int n;
		for(int i=0; i<n; i++)
		{
			
		}
		
	}
	void sort_litf()
	{
		int n;
		 for(int i=0; i<n-1; i++)
			{
				for(int j=i+1; j<n; j++)
				{
					if(tc[i].salary < tc[j].salary)
					{
						temp = tc[i];
						tc[i] = tc[j];
						tc[j] = temp;
					}
				}
			}
		
	}
};
int main()
{
	Teacher tc[3] = {};
	
	 int i;
	 
	 for(i = 0; i<3; i++)
	 {
		cout << Teacher[i].input();
		cout << Teacher[i].output();
		cout << Teacher[i].update();
		cout << Teacher[i].sort_litf();
		
	 }
	
	
	getch();
	return 0;
}