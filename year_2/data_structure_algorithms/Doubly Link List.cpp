#include <iostream>
#include <conio.h >
#include <stdlib.h>
using namespace std;
typedef int x;
struct pnt
{
	x Info;
	pnt *left, *right;
};
pnt *insertNode(pnt *plist, x newdata)
{
	pnt *p, *p1;
	
}
pnt *delectNode(pnt *plist, x item)
{
	pnt *p;
	if(plist == NULL)
	{
		cout << "\tEmpty List!\n";
	}else
	{
		p = plist;
		while (p != NULL)
		{
			if(item != p -> Info)
			{
				p = p -> right;
			}
			else
			{
				break;
			}
		if(p == NULL)
		{
			cout << "Search Not Found!\n";
		}else
		{
			// First Node
			if(item == plist -> Info)
				{
					plist = plist -> right;
					p -> left = NULL;
				}else // Between or Last Node
					{
						p -> left -> right = p -> right;
						p -> right -> left = p -> left;
					}
			free(p);   // free memory space;
			}
		}
	}
	return plist; 
}
pnt *creatList(int n)
{
	pnt *plist, *p, *p1;
	x newdata;
	cout << "Info of first Node : "; cin >> newdata;
	
	p = (pnt *)malloc(sizeof(pnt));  // statement to create node;
	
	p -> Info = newdata; // assign newdata
	p -> left = NULL;   // Null for left pointer
	p -> right = NULL;   // Null for right pointer
	
	plist  = p1  = p;  // three pointer point to ONE Node  // First Node
	
	for(int i=1; i<n; i++) // for(int i=0; i<n-1; i++)
	{
		cout << "Info of data Node : "; cin >> newdata;
		p = (pnt *)malloc(sizeof(pnt));
		
		p -> Info = newdata;
		p -> left  = NULL;
		p -> right = NULL;
		p1 -> right = p;
		p -> left = p1;
		
		p1 = p;
	}
	return plist;
}
void displayList(pnt *plist)
{
	pnt *p;
	
	p = plist;   // point to first node;
	while (p != NULL)
	{
		cout << p -> Info << "\t";
		p = p -> right; // connect to next pointer
	}
}
int main()
{

	
	getch();
	return 0;
}