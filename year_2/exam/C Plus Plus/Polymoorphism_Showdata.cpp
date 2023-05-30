#include <iostream>
#include <conio.h>
using namespace std;
class A
{
protected:
	int a ;
public :
	virtual void showData()
	{
		cout << "A = " << a << endl;
		
	}
};
class B
{
protected:
	char name[18];
public:
	void showData()
	{
		cout << "Name : " << name << endl;

	}
};
class C
{
protected:
	float x;
public:
	void showData()
	{
		cout << "X = " << x << endl;
	}
};
int main()
{
	A a(99);
	B b("Puthsitha");
	C c(99.99);
	A *pnt[] = {&a, &b, &c};
	
	for(int i=0; i<3; i++)
	{
		pnt[i] -> showData();
	}
	
	getch();
	return 0;
}