#include <iostream>
#include<conio.h>
using namespace std;
class Vector{
	private:
		int x, y, z ;
	public :
	Vector(int a,int b,int c){ x =a ; y = b; z =c;}

	Vector (){}; // Empty or default constructor

	Vector operator + ( Vector s)
	{
		x = x + s.x;
		y = y + s.y;
		z = z + s.z;
		return Vector (x,y,z);
	}
	void Display()
	{
		cout <<"x component = "<< x << endl;
		cout <<"y component = "<< y << endl;
		cout <<"z component = "<< z << endl;
	}
}; // End of class
int main()
{

	Vector V1( 2,4,5);
	Vector V2( 6, 5, 8);
	Vector V3;
	V3 = V2 + V1;
	V3.Display() ;
	getch();
	return 0;
}





