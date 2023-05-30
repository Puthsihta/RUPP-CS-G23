#include <iostream>
#include <conio.h>
using namespace std;
class Vector
{
	private:
		int x, y, z ;
	public :
		void setvalues (int a, int b, int c)
		{ x =a ; y = b; z =c;}
		void operator += (Vector P)
		{  	x = x + P.x ;
			y = y + P.y ;
			z = z + P.z ;
		}
		void operator -= ( Vector P)
		{	x = x - P.x ;
			y = y - P.y ;
			z = z - P.z ;
		}
void Display( )
{ cout <<"x ="<< x <<"\ty ="<<y <<"\tz = "<< z <<endl;}
}; // End of class
int main()
{
	Vector V1, V2, V3;
	V1.setvalues ( 12,4,6);
	V2.setvalues( 2, 5, 7);
	V3.setvalues (4,5,6);
	V1 += V2;
	V3 -= V2;
	cout<<"Components of V1 are : ";
	V1.Display() ;
	cout<<"Components of V3 are : ";
	V3.Display();
	cout<<"Components of V2 are : ";
	V2.Display();
	
	getch();
	return 0;
}

