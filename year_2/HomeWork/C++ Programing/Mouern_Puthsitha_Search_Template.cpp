#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
template <class S>
S sort(S li[], int n)
{
	S item;
	int found = 0;
	cout << "\nEnter Item to Search : "; cin >> item;
	
	for (int i=0; i<n; i++)
	{
		if(item == li[i])
		{
			cout << "\nThis is the Number You Search = " << li[i] << endl;
			found++;
		}
	}
	if(found == 0)
	{
		system("cls");
		system("color 4");
		cout << "\nNot Found!\n" << endl;
		getch();
		system("cls");
	}
}
int main()
{
	int list_int[99];
	char list_char[99];
	float list_float[99];
	
	int num_int , num_char, num_float;
	
	cout << "Enter element of Integer : "; cin >> num_int;
	
	for(int i=0; i<num_int; i++)
	{
		cout << i+1 << ". Enter integer : ";
		cin >> list_int[i];
	}
	
	cout << "\n\n-----Output Integer-----\n\n";
	
	for(int i = 0; i<num_int; i++)
	{
		cout << list_int[i]  << endl;
	}
	
	sort(list_int, num_int); // integer
	
	
	system("color 7");
	cout << "Enter element of character : "; cin >> num_char;
	
	for(int i=0; i<num_char; i++)
	{
		cout << i+1 << ". Enter character : ";
		cin >> list_char[i];
	}
	
	cout << "\n\n-----Output Character-----\n\n";
	
	for(int i = 0; i<num_char; i++)
	{
		cout << list_char[i]  << endl;
	}
	
	sort(list_char, num_char);  // character
	
	
	system("color 7");
	cout << "Enter element of float : "; cin >> num_float;
	
	for(int i=0; i<num_float; i++)
	{
		cout << i+1 << ". Enter float : ";
		cin >> list_float[i];
	}
	
	cout << "\n\n-----Output Float-----\n\n";
	
	for(int i = 0; i<num_float; i++)
	{
		cout << list_float[i]  << endl;
	}
	
	sort(list_float, num_float);
	
	
	getch();
	return 0;
}