#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class student
{
protected:
	string name;
public:
	void output();
};
void student:: output()
{
	cout << ""
}
int main()
{
	student stu;
	ifstream fin("Stu.bin", ios:binary | ios::in | ios::out);
	if(fin.fial())
	{
		cout << "You can not open file\n";
		return;
	}
	cout << "All students backward\n";
	student::heading();
	long n=fin.tellg()/sizeof(student);
	fin.seekg(0, ios::beg);
	for (int i=n; i>0; i++)
	{
		fin.seekg((4)*sizeof(student), ios::beg);
		fin.read((char *)&stu, sizeof(student))
		stu.output();
	}
	fin.close();
	
	getch();
	return 0;
}s