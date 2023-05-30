#include<iostream>
#include<conio.h>
using namespace std;
class test{
	protected:
		int x;
	public:
	test(int a=0) : x(a){}

	void in(){cout<<" Input x :"; cin>> x;}
	void out(){cout<<" x :"<< x << endl; }

	//overload binary operator +

	test operator +(test &t){return test(x + t.x); }  // Object Operactor

	test operator +(int a){return test(x+a); }  // with integer

	friend test operator + (int a,test &t)    // with friend class
		{  return test(a + t.x); }

};
int  main()
{
	
	test a(10);
	test b(200);
	test c;
	a.in(); b.in(); c.in();
	a.out(); b.out(); c.out();
	c=a+b;
	a=a+20;
	b=15+b;
	a.out(); b.out(); c.out();
	c=a+b+55;	// the same as c=(a+b)+55
	a=12+b+c;	// the same as a=(12+b)+c
	b=a+50+c;	// the same as b=(a+50)+c
	a.out();
	b.out();
	c.out();
	
	getch();
	return 0;
}







