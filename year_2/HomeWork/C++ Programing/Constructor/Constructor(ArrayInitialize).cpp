#include <iostream>
#include <conio.h>
using namespace std;
class MyClass 
{

	  int h;
	  int i;
	public:
	  MyClass(int j, int k) 
	  {
		  h = j;
		  i = k;
  }
  int getInt() 
  {
	  return i;
  }
  int getHeight() 
  {
	  return h;
  }
  void seth()
  {
  h=11;
  }
  void seti()
  {
  i=22;
  }
};
int main()
{   MyClass myObject[3] = 
	{
	 MyClass(1, 2), // initialize
	 MyClass(3, 4),
	 MyClass(5, 6)
  	};
  	
  int i;
  
  myObject[0].seth();
  myObject[2].seti();

  for(i=0; i<3; i++) 
  	{
	 cout << myObject[i].getHeight();
	 cout << ", ";
	 cout << myObject[i].getInt() << "\n";
  	}
  
  getch();
  return 0;
}
