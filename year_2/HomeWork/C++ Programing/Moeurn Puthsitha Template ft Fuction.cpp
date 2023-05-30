#include <iostream>
#include <conio.h>
using namespace std;

template <class T>
T max(T n[], int m)
{
	T z = n[0];
	int  i;
	
	for (i =1; i<m; i++)
	{
		if(n[i]>z)
		{
			z = n[i];
		}
	}
	return z;
}
int main()
{
	int u[99];
	int m;
	int n;
	int f;
	float x[99];
	float y;
	
	cout << "Enter Number of Integer : "; cin >> n;
	cout << endl;
	
	for (int i=0; i<n; i++)
	{
		cout << "Enter Number  " << i+1  << " = ";
		cin >> u[i];
	}
	
	cout << "\n===OUTPUT--Integer====" << endl << endl;
	
	for (int i =0; i<n; i++)
	{
		cout << u[i] << endl;
	}
	m = max(u, n);
	
	cout << "Enter number of Float : "; cin >>   f;
	cout << endl;
	
	for (int i=0; i<f; i++)
	{
		cout << "Enter Number  " << i+1 << " = ";
		cin >> x[i];
	}
	
	cout << "\n===OUTPUT--Float====" << endl << endl;
	
	for (int i=0; i<f; i++)
	{
		cout << x[i] <<  endl;
	}

	y = max(x, f);
	
	getch();
	return 0;
}