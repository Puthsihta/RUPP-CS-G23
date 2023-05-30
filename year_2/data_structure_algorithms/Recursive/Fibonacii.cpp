#include <iostream>
#include <conio.h>
using namespace std;
long fibo(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}            else
	{
		return (fibo(n-1) + fibo(n-2));
	}
}
void fibo_1(int n, long &s)
{
	long s1;
	if(n==1 || n==2)
	{
		s = 1;
	}            else
	{
		fibo_1(n-1, s);
		s1 = s;
		fibo_1(n-2, s);
		
		s = s1 + s; // s += s1;
	}
}
int main()
{
	long f;
	int n;
	
	do
	{
		cout << "Enter N = ";
		cin >> n;
		
		fibo_1(n, f);
											
		cout << "Fobonacci = " <<  f << endl;
	}while(n != 99);
	
	getch();
	return 0;
}