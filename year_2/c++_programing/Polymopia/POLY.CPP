/*
#include <iostream.h>
#include<conio.h>
class B
{
  public:
  void Display (){
    cout<< "Are you going to learn C++?"<<endl;
  }
}; // End of class B

class D : public B
{
  public :
   void Display( ){
     cout<< "I am also learning C++."<<endl;
   }
}; // End of class D



int main()
{
	clrscr();
	B b; //b is an object of base class B
	D d; // d is an object of derived class D
	B *bptr; // pointer to class B
	bptr = &(B)b; //pointer initialization of pointer to B
	bptr -> Display(); // Function called by pointer
	bptr = &d; //the pointer is assigned address of d.
	bptr -> Display (); //the pointer is used to call the function
return 0;
}
*/



#include <iostream.h>
#include<conio.h>
class B
{
public:
void Display ()
{ cout<<"Are you going to learn C++?"<<endl;}
} ; // End of class B
class D : public B
{
public :
void Display( )
{cout<<"I am also learning C++."<<endl;}
} ; // End of class D
int main()
{
   clrscr();
   B b ; //b is an object of base class B
   D d ; // d is an object of derived class D
   B *bptr = & (B) b ; //pointer to B
   D *dptr = &(D) d ; // pointer to class D
   bptr -> Display ();
   dptr -> Display();

return 0;
}
