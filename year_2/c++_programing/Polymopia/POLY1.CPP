/// By Teacher ley Sokhun
#include <iostream.h>    
#include<conio.h>
class B
{
public:
void Display ()
{cout<< "Are you going to learn C++?"<<endl;}
}; // End of class B

class D : public B
{
public :
void Display()
{
   B::Display();
  cout<< "I am also learning C++."<<endl;}
}; // End of class D

int main()
{
    clrscr();
	D bobj;
	bobj.Display (); //the pointer is used to call the function
return 0;
}



/*
#include <iostream.h>
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

   B bptr;
   D dptr;
   bptr.Display ();
   dptr.Display();

return 0;
}
*/