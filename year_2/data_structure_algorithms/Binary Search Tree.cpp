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
//create Node;
pnt *creatBST(int n)
{
	pnt *root, *p, *p1;
	x newItem;
	root = NULL;
	for (int i=1; i<=n; i++)
	{
		cout << "Enter new item : "; cin >> newItem;
		p = (pnt *)malloc(sizeof(pnt));
		p -> item = newItem;
		p -> left = NULL;
		p -> right = NULL;
		
		if (root == NULL)
		{
			root = p;
		}else
		{
			p1 = root;
			while(1)
			{
				if(newItem < p1 -> item)
				{
					if(p1 -> left != NULL)
					{
						p1 = p1 -> left;
					}else
					{
						p1 -> left = p;
						break;
					}
				}else
				{
					if(p1 -> right != NULL)
					{
						p1 = p1 -> right;
					}else
					{
						p1 -> right = p;
						break;
					}
				}
			}
		}	
	}
	return root;
}
// travasor
void preOutput(pnt *root)
{
	if (root != NULL)
	{
		cout << root -> item << "\t";
		preOutput(root->left);
		preOutput(root->right);
	}
}
void inOutput(pnt *root)
{
	if (root != NULL)
	{
		inOutput(root->left);
		cout << root -> item << "\t";
		inOutput(root->right);
	}
}
void postOutput(pnt *root)
{
	if (root != NULL)
	{
		postOutput(root->left);
		postOutput(root->right);
		cout << root -> item << "\t";
	}
}
//insertNode
pnt *insertBST(pnt *root, x newdata)
{
	pnt *p, *p1;
	
	p = (pnt *)malloc(sizeof(pnt));
	p -> item = newdata;
	p -> left = NULL;
	p -> right = NULL;
	
	if (root == NULL)
	{
		root = p;
	}else
	{
		p1 = root;
		while(1)
		{
			if(newdata < p1 -> item)
			{
				if(p1 -> left != NULL)
				{
					p1 = p1 -> left;
				}else
				{
					p1 -> left = p;
					break;
				}
			}else
			{
				if(p1 -> right != NULL)
				{
					p1 = p1 -> right;
				}else
				{
					p1 -> right = p;
					break;
				}
			}
		}
	}
	return root;
}
//searchNode
pnt *searchNode(pnt *root, x keyItem)
{
	pnt *p;
	p = root;
	while(p!=NULL)
	{
		if(keyItem == p -> item)
		{
			break;
		}else
		{
			if(keyItem < p -> item)
			{
				p = p -> left;
				
			}   else
			{
				p = p -> right;
			}
		}
	}
	return p;
}

//delete Node;
pnt *findMin(pnt *root) // search MinNode
	{
		if(root == NULL || root -> left == NULL) // left is predeccessor
		{
			return root;
		}else
		{
			return findMin(root -> left); 
		}
	}
pnt *deleteNode(pnt *root, x keyItem)
{
	
	pnt *p;
	if(root == NULL)
	{
		cout << "Empty List";
	}else
	{
		if(keyItem < root -> item)
		{
			root -> left = deleteNode(root -> left, keyItem);
		}else if(keyItem > root -> item)
		{
			root -> right = deleteNode(root -> right, keyItem);
		}else
		{
			if((root -> left != NULL) && (root -> right != NULL)) // two child
			{
				p = findMin(root -> right); // search for successor at right
				root -> item = p -> item; // swap root or overwrite by p -> item
				root -> right = deleteNode(root -> right, p -> item);//delete Node point to MinNode
			}else // one child or NULL
			{
				p = root;
				if(root -> left == NULL)
				{
					root = root -> right;
				}else
				{
					if(root -> right == NULL)
					{
						root = root -> left;
					}
				}
				free(p);
			}
		}
	}
	return root;
}
// count Node
void countNode(pnt *root, int &count)
{
	static int n = 0;
	if (root != NULL)
	{
		n++;
		countNode(root -> left, count);
		countNode(root -> right, count);
	}
	count = n;
}
// sum Node
void sumItem(pnt *root, x &sum)
{
	static x total = 0;
	if (root != NULL)
	{
		total = total + root->item;
		sumItem(root->left, sum);
		sumItem(root->right, sum);
	}
	sum = total;
}
// Max Node
void maxItem(pnt *root, x &max)
{
	static x m = root -> item;
	if (root != NULL)
	{
		if(m < root->item)
		{
			m = root->item;
		}
		maxItem(root->left, max);
		maxItem(root->right, max);
	}
	max = m;
}
int main()
{
	pnt *root; // external pointer
	x keyItem, sum, max; // value of Node
	int n, count; // number of Node
	
	cout << "Enter Number of Node : "; cin >> n;
	
	// create list
	root = creatBST(n); // assign create Node pointer to external
	
	
	// output
	cout << "\n\t\tPreOrder\n\n";
	preOutput(root);
	
	cout << "\n\t\tInOrder\n\n";
	inOutput(root);
	
	cout << "\n\t\tPostOrder\n\n";
	postOutput(root);
	cout << endl << endl;
	
	// count Node
	countNode(root, count);
	cout << "Number of Node : " << count << endl;
	
	// Sum Node
	sumItem(root, sum);
	cout << "Total of Items : " << sum << endl;
	
	// Max Node
	maxItem(root, max);
	cout << "Maximum of Items : " << max << endl;
	
	//delete Node
	cout << "\n\t-----Delete Node------\n";
	cout << "\nEnter Value To Delete : "; cin >> keyItem;
	root = deleteNode(root, keyItem);
	
	//new List
	// output
	cout << "\n\t\tPreOrder\n\n";
	preOutput(root);
	
	cout << "\n\t\tInOrder\n\n";
	inOutput(root);
	
	cout << "\n\t\tPostOrder\n\n";
	postOutput(root);
	cout << endl << endl;
	
	// count Node
	countNode(root, count);
	cout << "Number of Node : " << count << endl;
	
	// Sum Node
	sumItem(root, sum);
	cout << "Total of Items : " << sum << endl;
	
	// Max Node
	maxItem(root, max);
	cout << "Maximum of Items : " << max << endl;
	
	// insert Node
	cout << "\n\t-----insert Node------\n";
	cout << "\nEnter Value To insert : "; cin >> keyItem;
	root = insertBST(root, keyItem);
	
	//new List
	// output
	cout << "\n\t\tPreOrder\n\n";
	preOutput(root);
	
	cout << "\n\t\tInOrder\n\n";
	inOutput(root);
	
	cout << "\n\t\tPostOrder\n\n";
	postOutput(root);
	cout << endl << endl;
	
	// count Node
	countNode(root, count);
	cout << "Number of Node : " << count << endl;
	
	// Sum Node
	sumItem(root, sum);
	cout << "Total of Items : " << sum << endl;
	
	// Max Node
	maxItem(root, max);
	cout << "Maximum of Items : " << max << endl;

	getch();
	return 0;
}