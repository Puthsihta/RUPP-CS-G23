#include <iostream>
#include <conio.h>
using namespace std;
long pgcd(long a, long b)
{
	//using loop
	while (a!=b)
	{
		if(a>b)
		{
			a -= b;
		}          else
		{
			b -= b;
		}
	}
	return a;
	
}
int main()
{
	long a, b, s5;
	cout << "Enter A = "; cin >>     a;
	cout << "Enter B = ";   cin >> b;
	
	s5 = pgcd(a, b);
	cout << "PGCD = " << s5 << endl;
	
	getch();
	return 0;
}