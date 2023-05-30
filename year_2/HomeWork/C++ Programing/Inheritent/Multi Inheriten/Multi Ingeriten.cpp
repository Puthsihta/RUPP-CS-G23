#include<iostream>
#include<conio.h>
using namespace std;
class base1 
{
	int a;
	public:
		base1(int x)
		{ 
			a=x;
		}
		int geta()
		{
			return a;
		}
};
class base2 {
	int b;
	public:
		base2(int x)
		{ 
			b=x;
		}
		int getb() 
		{ 
			return b; 
		}
};
class derived : public base1,public base2
{
  int c;
  public:
  derived(int x,int y,int z): base1(z),base2(y)
  { 
  	c=x;
  }
  void show() 
  	{ 
  		cout<< geta() << ' ' << getb() << ' ';
		cout<< c <<endl;
	}
};

int main()
{
	derived obj(9.9 , 6.5, 3.8);    // integer only
	obj.show();
	
	getch();
	return 0;
}