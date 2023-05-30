#include<iostream>
#include <conio.h>
using namespace std;
class threeD 
{ 
private:
	int x,y,z;
public:
		threeD()
		{
			x=y=z=0;
		}
		threeD( int i,int j,int k)
		{
			x = i; 
			y = j; 
			z = k; 
		}

	threeD operator + (threeD op2);
	threeD operator = (threeD op2);
	threeD operator - (threeD op2);
	
	void show();
};
//Outside the Class
// overload subtraction
	threeD threeD :: operator -(threeD op2)
	{
	  x = x - op2.x;
	  y = y - op2.y;
	  z = z - op2.z;
	  return threeD(x,y,z);
	}
// overload Addition
	threeD threeD::operator +(threeD op2)
	{
	  threeD temp;
	  temp.x = x + op2.x;
	  temp.y = y + op2.y;
	  temp.z = z + op2.z;
	  return temp;
	}
// overload assignment
	threeD threeD::operator = (threeD op2)
	{
	  x = op2.x;
	  y = op2.y;
	  z = op2.z;
	  return  *this;
	}
//Function Outside Class
void threeD :: show()
	{
		cout<< x <<" , ";
		cout<< y <<" , ";
		cout<< z << endl;
	}

int  main()
{	
	threeD a(1,2,3);
	threeD b(10,10,10);
	threeD c;
	cout<<"Original value of a :";
	a.show();
	cout<<"original value of b :";
	b.show();
	c = a - b;
	cout<<" a - b  = ";
	c.show();
	
	
	getch();
	return 0;

}



