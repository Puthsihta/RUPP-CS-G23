#include <iostream>
#include <conio.h>
using namespace std;

	class Sqr; //pre-declaration of class
	class Rect { // class Rect
			int x,y; 
		public:
			Rect ( int A, int B) { x = A, y = B;}
			int area ( ){return x*y;}
			friend void Display ( Rect R, Sqr S ); // friend function to Rect
};

	class Sqr { 
			int side; 
		public:
			Sqr (int C){ side = C;}
			int Area ( ){return side*side;}
			friend void Display (Rect R , Sqr S );
}; //end of class

	void Display ( Rect R, Sqr S) 
		{cout <<"Area of rect = "<< R.area()<<endl;
		 cout <<"Area of Square = "<< S.Area()<< endl;}
int main()
	{
		Rect R1(10,5);
		Sqr S1 (10);
		Display ( R1, S1 );
		
		getch();
		return 0;
	}             