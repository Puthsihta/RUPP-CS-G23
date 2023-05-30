#include <iostream>
#include <conio.h>
using namespace std;
void bubbleSort(float a[], int n) // process n-1 // swap near element
{
	float temp;
	for (int i=0; i<n-1; i++)
	{
		for (int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
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
	
	bubbleSort(x, n);
	
	cout << "\n\n\tAfter Sort\n\n";
	
	for(int i=0; i<n; i++)
	{
		cout << x[i] << "\t";
	}
	cout << endl << endl;
	
	
	
	getch();
	return 0;
}