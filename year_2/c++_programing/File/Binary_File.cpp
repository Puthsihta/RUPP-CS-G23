#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
class Person
{
protected:
	string name;
	int age;
public:
	void getData()
	{
		cout << "Enter name : "; cin.seekg(0); getline(cin, name);
		cout << "Enter age : "; cin >> age;
	}
	void showData();
};
void Person :: showData()
{
	cout << name << age << endl;
}
int main()
{
	int n, i;
	
	fstream inout;
	
	cout << "Input N : "; cin >> n;
	
	Person *p = new Person[n];
	for(i=0; i<n; i++)
	{
		cout << "Person "<< i+1 << " : " << endl;
		p[i].getData();
	}
	inout.open("myfile.dat", ios::out|ios::binary);
	for (int i=0; i<n; i++)
	{
		inout.write((char*)&p[i], sizeof(p[i]));
	}
	inout.close();
	cout << endl << endl;
	inout.open("myfile.dat", ios::out|ios::binary);
	for (int i=0; i<n; i++)
	{
		inout.read((char*)&p[i], sizeof(p[i]));
		p[i].showData();
	}
	inout.close();
	/*
	Person per;
	per.getData();
	
	ofstream outfile("Person.Dat", ios::binay);
	outfile.write((char*)(&per), sizeof(per));
	outfile.close();
	
	ifstream infile("Person.Dat", ios::binary);
	infile.read((char*)(&per), sizeof(per));
	per.showData();
	*/

	getch();
	return 0;
}