#include <iostream>
#include <conio.h>
using namespace std;
long sum(int n)
{
	if(n==1)
	{
		return 1;
	}            else
	{
		return sum(n-1) + n;
	}
}
void sum_1(int n, long &s)
{
	if(n==1)
	{
		s = 1;
	}         else
	{
		sum_1(n-1, s);
		s = s + n;
	}
}
int main()
{
	int n;
	long s;
	
	do
	{
		cout << "Enter Number = ";
		cin >> n;
		
		//s = sum(n);
		sum_1(n, s) ;
		
		cout << "Sum of " << n << " = " << s << endl;
	}while(n != 99);
	getch();
	return 0;
}