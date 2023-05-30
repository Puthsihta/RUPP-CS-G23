#include <iostream> 
#include <conio.h>
using namespace std;
class MyClass { 
	public: 
	  int x; 
	  int y; 
 
  // Overload the default constructor. 
  	MyClass() 
  	{ 
  		x = y = 0; 
  	} 
 
  // Constructor with one parameter. 
  	MyClass(int i) 
  	{ 
  		x = y = i; 
  	} 
 
  // Constructor with two parameters. 
  MyClass(int i, int j) 
  { 
  	x = i; y = j; 
  } 
};   
 
int main() {
	   
	  MyClass t;         // invoke default constructor 
	  MyClass t1(5);     // use MyClass(int) 
	  MyClass t2(9, 10); // use MyClass(int, int) 
	 
	  cout << "t.x: " << t.x << ", t.y: " << t.y << "\n"; 
	  cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n"; 
	  cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << "\n"; 
 
 	getch();
  	return 0; 
}
