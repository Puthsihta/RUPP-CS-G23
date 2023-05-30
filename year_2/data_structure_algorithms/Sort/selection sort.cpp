#include <iostream>
#include <conio.h>
using namespace std;
void sortList(float a[], int n)  // process n-1 // select min element
{
	float temp; int mi;
	for (int i=0; i<n-1; i++)
	{
		mi = i;
		for (int j=i+1; j<n; j++)
		{
			if(a[mi]>a[j])
			{
				mi = j;
			}
			temp = a[mi];
			a[mi] = a[i];
			a[i] = temp;
		}
	}
}
int main()
{
	
	float x[99]; int n;
	
	cout << "Enter number of elements : "; cin >> n;
	
	
	for (int i = 0; i<n; i++)
	{
		cout << i+1 << ". Enter number : ";
		cin >> x[i];
	}
	
	cout << "\n\n\tBefore Sort\n\n";
	
	for(int i=0; i<n; i++)
	{
		cout << x[i] << "\t";
	}
	cout << endl << endl;
	
	sortList(x, n);
	
	cout << "\n\n\tAfter Sort\n\n";
	
	for(int i=0; i<n; i++)
	{
		cout << x[i] << "\t";
	}
	cout << endl << endl;
	
	getch();
	return 0;
}