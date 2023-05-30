#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
typedef int x; // itemType
struct pnt // treeType
{
	x item;
	
	pnt *left;
	pnt *right;
};
// create list 
pnt *createBT(int n) // n = number of Node
{
	pnt *p;
	x newItem;
	int nl, nr;
	
	if(n == 0) // start condition
	{
		return NULL;
	}else // general condition
	{
		cout << "Enter New Item : "; cin >> newItem;
		
		p = (pnt *)malloc(sizeof(pnt));
		
		p -> left = NULL;
		p -> right = NULL;
		
		nl = n/2;// number of left
		nr = n-nl-1; // number of rihgt
		
		p -> left = createBT(nl); // recursive
		p -> right = createBT(nr); // recursive
	}
	return p; // call expression 
}
// sum of tree items
void sumItem(pnt *root, x &sum)
{
	static x s = 0;
	if (root != NULL)
	{
		s = s + root->item;
		sumItem(root->left, sum);
		sumItem(root->right, sum);
	}
	sum = s;
}
// count Node
void countNode(pnt *root, int &cout)
{
	static int n =0;
	if(root != NULL)
	{
		n++;
		countNode(root -> left, cout);
		countNode(root -> right, cout);
	}
	cout = n;
}
// maximums of tree item
void maxItem(pnt *root, x &max)
{
	static x m = root -> item;
	if (root != NULL)
	{
		if(m < root -> item)
		{
			m = root -> item;
		}
		maxItem(root -> left, max);
		maxItem(root -> right, max);
	}
	max = m;
}
int main()
{
	
	getch();
	return 0;
}