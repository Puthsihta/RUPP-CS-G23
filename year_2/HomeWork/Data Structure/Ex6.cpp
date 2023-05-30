#include <iostream>
#include <conio.h>
using namespace std;
long sumNum(int a[9], int n)
{
	if(n <= 0)
	{
		return 0;
	}            else
	{
		return (sumNum(a, n-1) + a[n-1]);
	}
}
int main()
{
	int a[9];
	int n;
	cout << "Enter Size of Array : "; cin >> n;
	int i =0;
	for(i=0; i<=n; i++)
	{
		cout << "Enter A [ " << i+1 << " ] = ";
		cin >> a[i];
	}
	int arr[9];
	arr[9] = a[i];
	cout << "Sum = " << arr[i]  << endl;
	
	getch();
	return 0;
}