#include <iostream>
#include <conio.h >
using namespace std;

/*
// Using OverLoad Function
void sum(int n)
{
	long sum=0;
	for (int i=0; i<=n; i++)
	{
		sum += i;
	}
	cout << " Number = " << sum << endl;
}
int sum()   
{
	int n;
	long Sum=0;
	cout << "Enter N = ";
	cin >> n;
	for(int i=0; i<=n; i++)
	{
		Sum += i;
	}
	return Sum;
}

int main()
{
	int n;
	long Sum;
	cout << "Enter N = ";
	cin >> n;
	
	sum(n);
	cout << sum() << endl;
	
	getch();
	return 0;
}  */

void addArray(int a[], int n)
{
	for(int i=0; i<=n; i++)
	{
		a[i] += 2;
	}
}
int  main()
{
	int x[18], n;
	cout << "Enter N = ";
	cin >> n;
	
	for(int i=0; i<=n; i++)
	{
		cout << "Enter X [  " << i << " ] = ";
		cin >> x[i];
	}
	cout << "\n----------Before Output---------------\n";
	for(int i=0; i<=n; i++)
	{
		cout << "X [ "  << i << " ] = ";
		cout << x[i] << endl;
	}
	addArray(x, n);
	cout << "\n------------After Output-------------\n";
	for(int i=0; i<=n; i++)
	{
		cout << "X [ " << i << " ] = ";
		cout << x[i] << endl;
	}
	
	getch();
	return 0;
}                           