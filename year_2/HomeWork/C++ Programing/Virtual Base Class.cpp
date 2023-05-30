// using virtual base classes
#include <iostream>
#include <conio.h>
using namespace std;
class baseA {
  protected :
	     int x; // ការប្រកាសអញ្ញាត x ជាប្រភេទ int មានលក្ខណៈ protected

  public :
	     void getdata(); // ការប្រកាសអនុគមន៍ getdata() មានលក្ខណៈ public
	     void display(); // ការប្រកាសអនុគមន៍ display() មានលក្ខណៈ public
};

class derivedB: public virtual baseA { // path 1 តាមរយៈ derivedB
  protected :
	     float y; // ការប្រកាសអញ្ញាត y ជាប្រភេទ float មានលក្ខណៈ protected
  public :
	     void getdata(); // ការប្រកាសអនុគមន៍ getdata() មានលក្ខណៈ public
	     void display(); // ការប្រកាសអនុគមន៍ display() មានលក្ខណៈ public
};
class derivedC: public virtual baseA {// path 2 តាមរយៈ derivedC
	   protected :
	     char name[20]; // ការប្រកាស name ជា array ប្រភេទ char មានប្រវែង 20 តួអក្សរ
  	   public :
	     void getdata(); // ការប្រកាសអនុគមន៍ getdata() មានលក្ខណៈ public
	     void display(); // ការប្រកាសអនុគមន៍ display() មានលក្ខណៈ public
};
class abc:public derivedB, public derivedC {
	   public :
	     void getdata(); // ការប្រកាសអនុគមន៍ getdata() មានលក្ខណៈ public
	     void display(); // ការប្រកាសអនុគមន៍ display() មានលក្ខណៈ public
};
void baseA :: getdata(){
	   cout << "Enter an integer :"; //បង្ហាញអក្សរ Enter an integer : មកលើអេក្រង់
	   cin >> x; // បញ្ចូលតម្លៃ x តាមរយៈ keyboard
}
void baseA::display(){
   cout << "Integer : " << x << endl;
}
void derivedB::getdata(){
   baseA::getdata(); // ការហៅអនុគមន៍ getdata() តាមរយៈ baseA class
   cout << "Enter a floating point value :";
   cin >> y; // បញ្ចូលតម្លៃ y តាមរយៈ keyboard
}
void derivedB::display(){
	   baseA::display(); // ការហៅអនុគមន៍ display() តាមរយៈ baseA class
  	   cout << "Real number : " << y << endl;
}
void derivedC::getdata(){
	   baseA::getdata(); // ការហៅអនុគមន៍ getdata() តាមរយៈ baseA class
	   cout << "Enter a string :"; // បង្ហាញអក្សរ Enter a string : មកលើអេក្រង់
	   cin >> name; // បញ្ចូលតម្លៃ name តាមរយៈ keyboard
}
void derivedC::display(){
	   baseA::display(); // ការហៅអនុគមន៍ display() តាមរយៈ baseA class
	   cout << "String : " << name << endl;
}
void abc::getdata(){
	   derivedB::getdata(); // ការហៅអនុគមន៍ getdata() តាមរយៈ derivedB class
	   derivedC::getdata(); // ការហៅអនុគមន៍ getdata() តាមរយៈ derivedC class
}
void abc::display(){
	   derivedB::display(); // ការហៅអនុគមន៍ display() តាមរយៈ derivedB class
	   derivedC::display(); // ការហៅអនុគមន៍ display() តាមរយៈ derivedC class
}
int main()
{
	abc ob; // ការបង្កើត object នៃ abc class
	ob.getdata(); // ការប្រកាសអនុគមន៍ getdata() តាមរយៈ object នៃ abc class
	ob.display(); // ការប្រកាសអនុគមន៍ display() តាមរយៈ object នៃ abc class
	   
   	getch();
   	return 0;
}
