#include <iostream>
#include <conio.h>
using namespace std;

class Box {
	  public:
		 double length;
		 double width;
		 double height;

		 Box() 
		 {
			cout << "Default constructor called " << endl;
			length = width = height = 1.0;// Default dimensions
		 }
		 
		 Box(double lengthValue, double widthValue, double heightValue) 
		 {
			cout << "Box constructor called " << endl;
			length = lengthValue;
			width = widthValue;
			height = heightValue;
		 }
		 
		 double volume() 
		 {
			return length * width * height;
		 }
};


int main() {
  
  Box firstBox(80.0, 50.0, 40.0);

  Box smallBox;
  cout<<smallBox.volume()<<endl<<endl;
  cout<<firstBox.volume();

  getch();
  return 0;
}
