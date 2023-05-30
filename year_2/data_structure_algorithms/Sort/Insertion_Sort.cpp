#include <iostream>
#include <conio.h>
using namespace std;
void insertionSort(float a[], int n)
{
	float item; int j, i;
	for (i=1; i<n; i++)
	{
		item =a[i];
		j = i-1;
		while (item<a[j] && j!=-1)
		{
			a[j+1] = a[j];
		}
		a[j+1] = item;
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
	
	insertionSort(x, n);
	
	cout << "\n\n\tAfter Sort\n\n";
	
	for(int i=0; i<n; i++)
	{
		cout << x[i] << "\t";
	}
	cout << endl << endl;
	
	
	
	getch();
	return 0;
}