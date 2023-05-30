#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
protected:
	int id;
	char name[20];
	char sex;
};
class Employee:private person
{
private:
	float math;
	float kh;
	float eng;
public:
	void input();
	void output();

	static void header()
	{
		cout << "ID\tName\tGender" << endl;
	}
	
};

void Employee::input()
{
	cout << "Enter id = "; cin >> id;
	cout << "Enter Name = "; cin.seekg(0);
	cin.get(name, 20);
	cout << "Enter Gender = "; cin >> sex;
	
}
void Employee::output()
{
	cout << id <<  "\t" << name << "\t" << sex  << endl;
}

int main()
{
	int n, i;
	
	cout << "Enter Number of Employee : "; cin >> n;
	Employee *s1 = new Employee[n];
	
	for(int i=0; i<n; i++)
	{
		s1[i].input(); cout << endl;
	}
	
	//cout << "ID\tName\tGender\tMath\tKhmer\tEnglish\n" << endl;
	Employee::header();
	
	for(int i=0; i<n; i++)
	{
		
		s1[i].output();
		cout << endl;
	}
	
	
	getch();
	return 0;

}