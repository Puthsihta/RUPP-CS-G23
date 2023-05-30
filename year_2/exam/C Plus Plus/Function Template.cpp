#include <iostream>
#include <conio.h>

using namespace std;
template <class S>
S search(S li[], int n)
{
	S item;
	int found = 0;
	cout << "\nEnter Item to Search : "; cin >> item;
	
	for (int i=0; i<n; i++)
	{
		if(item == li[i])
		{
			cout << "\nThis is the Items You Search = " << li[i] << endl;
			found++;
		}
	}
	if(found == 0)
	{
		
		cout << "\nNot Found!\n" << endl;
		getch();
		
	}
}
int main()
{
	int x[10]={1,2,3,4,5,6,7,8,9,10};
	float f[5]={8.20, 7.15 , 6.50 ,5.02 ,4.60};
 	char ch[5]={'r', 'm' ,'b', 'k', 'c'};
	
	
	for(int i = 0; i<10; i++)
	{
		cout << x[i]  << endl;
	}
	search(x, 10);
	getch();
	for(int i = 0; i<5; i++)
	{
		cout << f[i]  << endl;
	}
	search(f, 5);
	getch();
	for(int i = 0; i<5; i++)
	{
		cout << ch[i]  << endl;
	}
	search(ch, 5);
	
	getch();
	return 0;
}