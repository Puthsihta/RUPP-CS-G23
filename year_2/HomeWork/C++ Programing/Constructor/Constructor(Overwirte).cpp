
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
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
	
  myclass object1 = 4;
  myclass object2 = "123";

  cout << "Object 1 : " << object1.geta() << endl;
  cout << "Object 2 : " << object2.geta() << endl;

  getch();
  return 0;
}
