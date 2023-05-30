#include <iostream>
#include <conio.h>
using namespace std;
class A
{
protected:
	int a, b;
public:
	virtual void sum()
	{
		//int a, b;
		cout << "Enter first number : "; cin >> a;
		cout << "Enter second number : "; cin >> b;
		cout << "Sum = " << a + b << endl;
	}
};
class B : public A
{
protected:
	float x, y, z;
public:
	void sum()
	{
		//int x, y , z;
		cout << "Enter x = " ;  cin >> x;
		cout << "Enter y = " ;  cin >> y;
		cout << "Enter z = " ;  cin >> z;
		cout << "Sum = " << x + y + z << endl;
	}
};
class C : public A
{
protected:
	int n, m, o, p;
public:
	void sum()
	{
		cout << "Enter First Num : "; cin >> n;
		cout << "Enter second num : "; cin >> m;
		cout << "Enter third num : "; cin >> o;
		cout << "Enter fourth num : "; cin >> p;
		cout << "Sum = " << m + n  + o + p << endl;
	}
};
int main()
{
	A a;
	B b;
	C c;
	A *pnt[] = {&a, &b, &c};
	for (int i=0; i<=2; i++) 
	{
		pnt[i] -> sum();
	}
	
	getch();
	return 0;
}