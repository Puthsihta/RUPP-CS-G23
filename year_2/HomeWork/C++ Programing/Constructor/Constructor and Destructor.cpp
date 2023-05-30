#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class myClass
{
	private:
		int a;
		int b;
		int c;
	public:
		void show()
		{
			cout << a << "\t" << b << "\t" << c << endl;
		}
		myClass(int i, int j, int k) // constructor
		{
			/*
			myClass::a = a;
			myClass::b= b;
			myClass::c = c;
			*/
			this->a = i;
			this->b = j;
			this->c = k;
		}
		myClass() ;
		
};
myClass::myClass()
{
			a = 30;
			b = 60;
			c = 90;
}
int main()
{
	myClass class1(3, 6, 9);
	myClass class2;
	
	class1.show();
	cout << endl << endl;
	class2.show();
	
	getch();
	return 0;
}