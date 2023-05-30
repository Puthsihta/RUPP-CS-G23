#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void Tower(int n, char a, char b, char c)
{
	if(n==1)
	{
		cout << "\n\t Move 1 disk from ";
		system("color 2");  
		cout << a;
		system("color 7");
		cout << " to ";
		system("color 7");
		system("color 2");
		cout  << c << endl;
		system("color 7");
	}else
	{
		Tower(n-1, a, c, b);
		Tower(1, a, b, c);
		Tower(n-1, b, a, c);
	}
}
int main()
{
	int n;
	char x, y, z;
	
	cout << "Enter Number of Disk = "; cin >> n;
	cout << "\n\t Enter First Tower = "; cin >> x;
	cout << "\t Enter Second Tower = "; cin >> y;
	cout << "\t Enter Third Tower = "; cin >> z;
	
	Tower(n,x,y,z);

	
	getch();
	return 0;
}