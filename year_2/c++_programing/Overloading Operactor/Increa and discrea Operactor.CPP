#include <iostream>
#include<conio.h>
using namespace std;
class Vector
{
	private:
		int x, y, z ;
	public :
	Vector(int a, int b,int c) { x =a ; y = b; z =c;}
	Vector (){}
	Vector operator ++(int)
	{ 	x +=1;
		y +=1;
		z +=1;
		return Vector( (x-1), (y-1), (z-1));
	}
	Vector operator ++() // Preincrement operator++
	{ 	x +=1;
		y += 1;
		z +=1;
		return Vector (x,y,z);
	}
	Vector operator -- () // Predecrement operator..
	{       x -=1;
		y -= 1;
		z -=1;
		return Vector (x,y,z);
	}
	Vector operator --(int) // Postdecrement operator ..
	{
		x -=1;
		y -= 1;
		z -=1;
		return Vector( (x+1), (y+1), (z+1));
	}
void Display( )
{ cout << "x = "<< x <<", y = "<<y <<", z = "<< z <<endl;}

};

int main()
{
  Vector V1(4,5,6),V2(21,22,23),V3( 1,2,3),V4(11, 12, 13);
  cout<< "Initial V1-components are: ";
  V1.Display();
  cout<< "After post increment V1-components are: ";
  (V1++).Display();
  cout<<"Now V1 components are : " ;
  V1.Display();
  cout<<"Initial V2-components are: " ;
  V2.Display();
  cout<<"After preincrement V2-components are:";
  (++V2).Display () ;
  cout<<"Initial V3-components are: ";
  V3.Display();
  cout<<"After post decrement V3-components are :" ;
  (V3--).Display();
  cout<<"Now components of V3 are : \n";
  V3.Display();
  cout<<"Initial V4-Components are :" ;
  V4.Display();
  cout<<"After predecrement V4-components are :";
  (--V4).Display () ;

  getch();
  return 0;
}