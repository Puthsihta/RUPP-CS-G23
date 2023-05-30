#include <iostream>
#include <conio.h>
using namespace std;

template<class T>
T sort(T obj[],int n)
{	int i,j;
	T tmp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(obj[i]>obj[j])
			{ tmp=obj[i];
			  obj[i]=obj[j];
			  obj[j]=tmp;
			}
}
int main()
{
	
	
	getch();
	return 0;
}