#include <iostream>
#include <conio.h>
using namespace std;
#define maxStack 9

typedef int elementType;
struct stackType
{
	int Top;
	elementType element[maxStack];
};

void clearStack(stackType &st)
{
	st.Top = -1;
}

void push(stackType &st, elementType x)
{
	if(st.Top == maxStack-1)
		cout << "Starck OverFlow !" << endl;
	else
	{
		st.Top++;
		st.element[st.Top] = x;
	}
}                                           

elementType pop(stackType &st)
{
	elementType x;
	if(st.Top == -1)
	{
		cout<< "Stack UnderFlow !" << endl;
		return 0;
	}            else
	{
		x = st.element[st.Top];
		st.Top--;
		return x;
	}
}

int emptyStack(stackType st)
{
	return (st.Top == -1);
}

int fullStack(stackType st)
{
	return (st.Top == maxStack -1);
}

int main()
{
	stackType s;
	int dec, x;
	
	cout << "Enter Decimal Number = "; cin >> dec;
	
	clearStack(s);  // create zero top of stack
	
	while(dec > 0)
	{
		x = dec%2;
		push(s,x); // put the data in the stack;
		dec /= 2;
	}
	
	cout << "Binary Number = "; 
	
	while(!emptyStack(s))
	{
		x = pop(s); // minurse 
		cout << x;
	}
	
	getch();
	return 0;
}
