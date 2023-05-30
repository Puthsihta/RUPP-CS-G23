#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
void reverse(long n, long &s)
{
	static long s1 = 0;
	if(n==0)
	{
		s = s1;
	} else
	{
		s1 = s1*10+n%10;
		reverse(n/10, s);
	}
}
int main()
{
	long num, n;
	
	cout << "Enter Number : "; cin >> n;
	
	reverse(n, num);
	
	cout << num << endl;
	
	getch();
	return 0;
}