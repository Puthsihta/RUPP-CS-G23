#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
long sum_3(int n)
{
	if(n==2)
	{
		return 2;
	}            else
	{
		sum_3(n-1) + pow(n, n-1);
	}
}
int main()
{
	long  s3;
	int n;
	cout << "Enter N = "; cin >> n;
	s3 = sum_3(n);
	
	cout << "Sum = " << s3 << endl;
	
	getch();
	return 0;
}