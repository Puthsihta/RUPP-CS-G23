#include <iostream>
#include <conio.h>
using namespace std;
long mul(long a, long b)
{
	if(a==1)
	{
		return b;
	}            else
	{
		mul(a-1, b) + b;
	}
}
int main()
{
	long a, b, s4;
	cout << "Enter A = ";
	cin >> a;
	cout << "Enter B = ";
	cin >> b;
	
	s4 = mul(a, b);
	
	cout << "Mul = "  << s4 << endl;
	
	getch();
	return 0;
}