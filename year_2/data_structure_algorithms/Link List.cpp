#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
typedef int x;
struct pnt
{
	x Info;
	pnt *next;
};
pnt  *creatList(int n)
{
	pnt *p, *p1, *plist;
	x newdata;
	cout << "Input data of first node : ";
	cin >> newdata;
	p = (pnt*)malloc(sizeof(pnt));
	p -> Info = newdata;
	p -> next = NULL;
	plist = p1 = p;
	for(int i=1; i<n; i++)
	{
		cout << "Enter data of node : ";
		cin >> newdata;
		p = (pnt*)malloc(sizeof(pnt));
		p -> Info = newdata;
		p -> next = NULL;
		plist = p1 = p;
	}
	return plist;
}
void displayList(pnt *plist)
{
	pnt *p;
	p = plist;
	while(p != NULL)
	{
		cout << p -> Info << "\t";
		p = p -> next;
	}
	cout << endl;
}
pnt *insertNode(pnt *plist, x newdata)
{
	pnt *p, *p1;
	p = (pnt*)malloc(sizeof(pnt));
	p -> Info = newdata;
	p -> next = NULL;
	if(plist == NULL)
	{
		plist = p;
	}             else
	{
		if(newdata < plist -> Info)
		{
			p -> next = plist;
			plist = p;
		}  else
		{
			p1 = plist;
			while(p1 -> next != NULL)
			{
				if(p1 -> next ->Info < newdata)
				{
					p1 = p1 -> next;
				}                   else
				{
					break;
				}
			}
			p -> next = p1 -> next;
			p1 -> next = p;
		}
	}
	return plist;
}
pnt *delectNode(pnt *plist, x item)
{
	
}
int countNode(pnt *plist)
{
	pnt *p; int n=0;
	p = plist;
	while(p != NULL)
	{
		n++;
		p = p -> next;
	}
	return n;
}
x totalInfo(pnt *plist)
{
	pnt *p; x s=0;
	p  = plist;
	while (p != NULL)
	{
		s = s + p -> Info;
		p = p -> next;
	}
	return s;
}
x maxInfo(pnt *plist)
{
	pnt *p; x max;
	max = plist -> Info;
	p = plist  -> next;
	while (p != NULL)
	{
		if(max < p -> Info)
		{
			max = p -> Info;
		}
		p = p -> next;
	}
	return max;
}
pnt *sortList(pnt *plist)
{
	pnt *p1, *p2; x temp;
	for(p1 = plist; p1 -> next != NULL; p1 = p1 -> next)
	{
		for (p2 = p1 -> next; p2 != NULL; p2 = p2 -> next)
		{
			if(p1 -> Info > p2 -> Info)
			{
				temp = p1 -> Info;
				p1 -> Info = p2 -> Info;
				p2 -> Info = temp;
			}
		}
	}
	return plist;
}
int main()
{
	pnt *plist; // ponterType
	x item;                   //infoType
	int n;
	cout << "Enter Number of Nodes : "; 
	cin >> n;
	
	plist = creatList(n);  // call Method to create List
	cout  << "\n-----------Data of List----------\n\n";
	displayList(plist);	 // Print List 
	cout << "\tNumber of Node = " << countNode(plist) << endl; // Count Method
	cout << "\tTotal Info of List = " << totalInfo(plist) << endl;
	cout << "\tMax Info of List = " << maxInfo(plist) << endl;
	cout << "\nData of Node to Delet = "; 
	cin >> item;
	plist = delectNode(plist, item);
	
	
	plist = sortList(plist);
	cout << "-----After Sort List------" << endl;
	displayList(plist);
	cout << "Data of new node : ";
	cin >> item;
	plist = insertNode(plist, item);
	
	
	
	getch();
	return 0;
}