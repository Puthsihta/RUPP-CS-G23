#include <iostream>
#include<conio.h>
using namespace std;
class Vector
{
int x, y, z ; // private by default
public :
Vector (){x = 3, y = 2, z =1;}
Vector (int a, int b,int c) { x =a ; y = b; z =c;}

void operator==( Vector S)
{   if ( x==S.x && y == S.y && z== S.z)
	cout <<"true"<< endl ;
    else
	cout<<"false"<< endl;
}
void Display ()
{
cout <<"Vector = ("<< x << ", "<<y << " "<<z<<")"<<endl;}
} ; // End of class
int main()
{
	Vector V1 ( 2,4,5), V2( 6, 5, 8) ,V3 ( 6,5,8);
	V1 == V2;
	V2 == V3;
	V1.Display ();
	V2.Display();
	V3.Display ();

	getch();
	return 0;
}