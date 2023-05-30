#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void error(int test)
{
	double db;
	string st;
	try
	{
		if(test)
		{
			throw test;
		}else if (test)
		{
			throw db;
		}else
		{
			throw st = "Value is Zero!";
		}
		
		
	}
	catch(int i)
		{
			cout << "Caught Integer #: " << i << endl;
		}
		catch(string str)
		{
			cout << "Caught String #: " << str << endl;
		}
		catch(double i)
		{
			cout << "Caught Double #: " << i << endl;
		}
}
int  main(){
	
	cout << "Start\n";
	
	error(1);
	error(0);
	error(1);
	error(0);
	error(99.343);
	
	cout << endl;
	
	getch();
}