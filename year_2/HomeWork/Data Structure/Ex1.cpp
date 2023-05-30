#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
  // a^1 + a^2 + a^3 + ... + a^n
double sum(double n, double a)
{
	if(n==1)
	{
		return a;
	}else
	{
		sum(n-1, a) + pow(a, n);
	}
}
/*void sum_1(flaot a, int n, float &s)
{
	if(n==1)
	{
		s=a;
	}       else
	{
		sum(a, n-1, s);
		s += pow(a, n);
	}
} */
int main()
{
	double a;
	double s1;
	int n;
	cout << "Enter A = ";
	cin >> a;
	cout << "Enter N = ";
	cin >> n;
	
	s1 = sum(n, a);
	//sum(a, n, s1);
	
	cout << "Sum = " << s1 << endl;
	
	getch();
	return 0;
}