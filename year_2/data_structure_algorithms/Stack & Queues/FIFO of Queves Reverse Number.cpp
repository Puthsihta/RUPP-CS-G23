#include <iostream>
#include <conio.h>
using namespace std;
#define maxQueue 18  
typedef  int elementType;
struct Qtype
{
	int r;
	int f;
	elementType element[maxQueue];
};

void clearStack(Qtype &st)
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
	
	getch();
	return 0;
}

