
#include <iostream>
#include <conio.h>
using namespace std;
class IntPair 
{
	public:
	  int a;
	  int b;
	  IntPair(int i, int j) : a(i), b(j) { }
	  /*
	  IntPair(int i,int j)
	  {
		  a=i;
		  b=j;
	  }
	  */
};
// Class in Class
class MyClass {
  IntPair nums;
public:
  // Initialize nums object using initialization syntax.
  MyClass(int x, int y) : nums(x,y) { }

  int getNumA() {
	  return nums.a;
  }
  int getNumB() {
	  return nums.b;
	  }
  };
int main()
{
	  MyClass object1(7, 9);
	  MyClass object2(5, 2);
	  
	  cout << "Values in object 1 are " << object1.getNumB() <<
			 " and " << object1.getNumA() << endl;
	  cout << "Values in object 2 are " << object2.getNumB() <<
			 " and " << object2.getNumA() << endl;

	getch();
  	return 0;
}

