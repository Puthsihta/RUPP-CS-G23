#include <iostream>
#include <conio.h>
using namespace std;

long sum(int n)
{
	if(n==1)
	{
		return 2;
	}            else
	{
		return sum(n-1) + n*(n+1);
	}
}
int main()
{
	long s1; int n;
	cout << "Enter N = "; cin >> n;
	s1 = sum(n);
	cout << "Sum = " << s1 << endl;
	
	getch();
	return 0;
}