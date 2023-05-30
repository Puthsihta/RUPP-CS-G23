#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;
class Student
{
protected:
	int id;
	string name;
public:
	void getData();
	void showData();
	static void header()
	{
		cout << "ID\t Name\n";
	}
};
void Student ::getData()
{
	cout << "Enter ID : "; cin >> id;
	cout << "Enter Name : "; cin.seekg(0); getline(cin, name);
}
void Student :: showData()
{
	cout << id << "\t" << name << endl;
}
void writeFile()
	{
		Student st;
		ofstream inFile;
		inFile.open("Puthsitha.txt",  ios::binary | ios::app);
		inFile.write((char *)&st, sizeof(st));
		
		inFile.close();
	}
void readFile()
	{
		ifstream outFile;
		outFile.read((char *)&st)
		
		outFile.close();
	}
void updateFile()
	{
		fstream findFile("Puthsitha.txt", ios::binary|ios::app);
		if(findFile.fail())
		{
			cout << "File Don't Have " << endl;
		}
	}
int main()
{
	
	int n, i;
	
	cout << "Enter Number of Students  : ";
	cin >> n;
	
	Student *st = new Student[n];
	for (i=0; i<n; i++)
	{
		cout << "#Student " << i+1  << " :" << endl;
		st[i].getData();
		st[i].writeFile();
	}
	Student::header();
	for (i=0; i<n; i++)
	{
		st[i].readFile();
		st[i].showData();
	}

	getch();
	return 0;
}
