#include <iostream>
#include <conio.h>

using namespace std;
class rect
{
   friend int area(rect &a);
   int x, y;
   public:
   	rect(int l, int w)
   	{
   		x = l;
   		y = w;
   	}
};
int area(rect &b)
{
	return b.x*b.y;
};
///Using in friend in class
class fri
{
private:
	float x;
	float y;
public:
	void input()
	{
		cout << "Enter x = "; cin >> x;
		cout << "Enter y = "; cin >> y;
	}
	//using friend fuction
	friend float sum(fri &f)
	{
		return f.x + f.y;
	}
	friend void output(fri &f)
	{
		cout << "X = " << f.x << endl;
		cout << "Y = " << f.y << endl;
	}                                
};
///Friend Class
int main()
{
	rect r1(5,6), r2(3,4);
	cout << "Area of r1 = " <<  area(r1) << endl;
	cout  << "Area of r2 = " << area(r2) << endl;
	
	getch();
	return 0;
}