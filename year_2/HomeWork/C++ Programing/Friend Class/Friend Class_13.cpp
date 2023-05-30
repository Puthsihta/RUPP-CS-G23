#include<iostream>
#include <conio.h>
using namespace std;
class two; // forward declaration
class one {
	private:
		int x;
	public:
		one(int t=0){x=t;}
		friend int sum(one &,two &);
};
class two {
	private:
		int y;
	public:
		two(int t=0):y(t){}
		friend int sum(one &,two &);
};
int sum(one &a,two &b){ return a.x+b.y;}
int main()
{
	 one obj1(55);
	 two obj2(77);
	 cout<<"Sum="<<sum(obj1,obj2)<<endl;
	 
	 getch();
	 return 0;
}