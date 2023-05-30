#include <iostream>
#include <conio.h>
using namespace std;
class MyClass
{
	double l, w, h;
  	double value;
	public:
		//parameter constructor
		MyClass(double a, double b, double c);
		void show();
};
 //out of class
MyClass::MyClass(double a, double b, double c)
{
  l = a;
  w = b;
  h = c;

  value = l * w * h;
}

void MyClass::show()
{
  cout << "Value is: " << value << endl;
}

int main()
{
	// assing value to two constructor
  MyClass x(2.2, 3.97, 8.09), y(1.0, 2.0, 3.0);

  x.show();
  y.show();
  
  getch();
  return 0;
}
