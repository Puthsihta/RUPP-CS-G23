// Write in CodeBlock IDE
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Book
{
	int id;
	char name(18);
	int book_size;
	char year(9);

public:
	void inputdata()
	{
		cout << "Enter ID : "; cin >> id;
		cout << "Enter Book Name : "; cin.seekg(0);
	 	cin.get(name,18);
	 	cout << "Enter Book Size : "; cin >> book_size;
	 	cout << "Enter Book Year : "; cin.seekg(0);
	 	cin.get(year, 9);
		
	}
	void outputdata()
	{
		cout << id << "\t" << name << "\t" << book_size << "\t" << year << endl;
	}
	Book(int a, int b)
	{
		a = id;
		b = book_size;	
	}
	static void header()
	{
		cout << "ID\t\tName\t\tSize\t\tYear\n\n";
	}
};
