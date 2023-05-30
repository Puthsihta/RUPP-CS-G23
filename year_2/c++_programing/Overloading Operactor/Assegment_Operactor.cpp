#include<iostream>
#include <conio.h>
using namespace std;
class sample{
	protected:	int *p;
	public:
		sample(int a=0){p=new int(a);}
		sample(sample &s){p=new int(*s.p);}
		~sample(){if(p) delete p;}
		void out(){cout<<*p<<endl;}
		void in(){cin>>*p;}
		void operator =(int a){*p=a;}
		void operator =(sample &s){*p=*s.p;}
	};
int  main()
{
	sample a,b(20);
	cout<<endl;
	cout<<"a=";
	a.out();
	cout<<"b=";
	b.out();
	a=b;    //a.operator(b);
	cout<<"a=";
	a.out();
	b=55;
	cout<<"b=";
	b.out();
	
	getch();
	return 0;
}