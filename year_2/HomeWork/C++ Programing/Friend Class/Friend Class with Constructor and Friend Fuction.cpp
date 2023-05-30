#include <iostream>
#include <conio.h>
using namespace std;
	class Rect {
		friend int Area( Rect &a); // friend function Area
		int x,y;
		public:
		Rect (int L, int W){ x = L,y = W;} // constructor function
	};

	int Area ( Rect &b) // definition of friend function
	{return b.x*b.y;};

	int main()
	{
		Rect R1(5,6), R2(3,4) ; //declaration of two objects R1 and R2
		cout <<"Area of R1="<< Area ( R1) <<"\n";
		cout <<"Area of R2 ="<< Area ( R2 )<<"\n";
		
		getch();
		return 0 ;
	}