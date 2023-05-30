  
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class myclass 
{
	int a;
	public:
		myclass(int x)
		{ 
			a = x; 
		} 
		myclass(char *str) 
		{ 
			a = atoi(str); 
		}
		int geta() 
		{ 
			return a; 
		}
};
 
int main()
{
  myclass object1 = 4;     // converts to myclass(4)
  myclass object2 = "123"; // converts to myclass("123");

  cout << "object 1: " << object1.geta() << endl;
  cout << "object 2: " << object2.geta() << endl;

  
  cout << "\t\tAssing New Value\n" ;
  object1 = "1776";        // converts into object1 = myclass("1776");
  object2 = 2001;          // converts into object2 = myclass(2001);

  cout << "object 1: " << object1.geta() << endl;
  cout << "object 2: " << object2.geta() << endl;

  getch();
  return 0;
}
