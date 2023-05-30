#include <iostream>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int convert(string b, int i =0)
{
	int n = b.length();
	if(i == n-1)
	{
		return b[i] - '0';
	}                     else
	{
		return ((b[i]- '0' << (n-i-1)) + convert(b, i+1));
	}
}

int main()
{
	string binary = "1101";
	
	cout << convert(binary) << endl;
		
	getch();
	return 0;
}