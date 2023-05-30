#include <iostream>
#include <conio.h>
using namespace std;

	class Rect {
		friend int Area( Rect &a); // a friend function
		int x,y; // private by default
	public:
		Rect (int L,int W){ x = L, y = W;} // constructor function
		friend double cost( Rect &a, double);//second friend function
}; // end of class

	int Area (Rect &b) // definition of Area Function
	{return b.x*b.y;}

	double cost( Rect &b, double s) //definition of cost ()
	{return b.x*b.y * s ;}

int main()
	{ 
		double A = 4.5 , B = 5.2; // A and B are for data for cost
		Rect R1(10,5), R2(20,5) ; // R1, R2 are two objects
		cout <<"Area of R1= "<< Area (R1) <<"\n";
		cout <<"Area of R2 ="<< Area (R2)<<"\n";
		cout <<"cost = "<<cost (R1,A) <<"\n";
		cout <<"cost = "<<cost (R2,B) <<"\n";
		
		getch();
		return 0 ;
	}