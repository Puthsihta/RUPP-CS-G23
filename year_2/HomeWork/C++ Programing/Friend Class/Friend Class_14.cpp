#include<iostream>
#include<conio.h>
using namespace std;
class A{
friend class B;
	public:
		int x;
	public:
	 A(int x1=0):x(x1){}
	 void input() { cout<<"x=";cin>>x; }
	 void output() { cout<<"x="<<x; }
};
class B {
	private:
		int y;
	public:
	 B(int y1=0):y(y1){}
	 void set(int y) {this->y=y; }
	 void set(A &a) { y=a.x; }
	 void input() { cout<<"y=";cin>>y; }
	 void output() { cout<<"y="<<y ; }
	 friend int sum(A &a, B &b)
		{  return a.x +b.y; }
	};
int  main()
{
	A a (88);
	a.output();
	B b;
	b.output();
	int s1=sum(a,b);
	cout<<"sum="<<s1;
	b.set(a);
	b.output();
	int s2=sum(a,b);
	cout<<"sum="<<s2;
	a.input();
	b.input();
	int s3=sum(a,b);
	cout<<"sum="<<s3<<endl;
	
	getch();
	return 0;
}