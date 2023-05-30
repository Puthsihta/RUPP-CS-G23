#include <iostream>
#include <conio.h>
#include <climits>
using namespace std;
long age(long bornYear, long currentYear)
{
	if(bornYear == currentYear)
	{
		return 0;
	}            else 
	{
		return age(bornYear, currentYear-1) + 1;
	}
}
int main()
{
	cout << "Size of integer : " << sizeof (int) << endl; 
	long by, cy, a;
	cout << "Enter Born Year : "; cin >> by;
	cout << "Enter Current Year : "; cin >> cy;
	
	a = age(by, cy);
	
	cout << "\nYou are : " << a << endl;
	
	
	
	getch();
	return 0;
}