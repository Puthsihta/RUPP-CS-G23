#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int coutTower(int n)
{
	if(n == 1)
	{
		return 1;
	}            else
	{
		return 2*(coutTower(n-1)) + 1;
	}
}
int move(int n)
{
	if(n == 0)
	{
		return 1;
	}            else
	{
		return move() - pow;
	}
}
int main()
{
	int n;
	cout << "Enter the number of Tower : ";
	cin >> n;
	
	int c;
	
	c = coutTower(n);
	
	cout << "\nYou move " << c << " time of tower." << endl;
	
	int N;
	cout << "Enter N : ";
	cin >>  N;
	
	int m;
	
	m = move(n);
	
	cout << "You move " << m << " time of Tower." << endl;
	
	getch();
	return 0;
}