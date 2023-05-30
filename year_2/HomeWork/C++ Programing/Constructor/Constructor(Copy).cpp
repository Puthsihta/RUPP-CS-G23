#include <iostream>
#include <conio.h>
using namespace std;
class MyClass  {
   private:
      int data;
   public:
      MyClass(){ }

      MyClass(int d){ data = d; }

      MyClass(MyClass& a){
	 data = a.data;
	 cout << "\nCopy constructor invoked";
      }
      void display(){ cout << data; }
      void operator = (MyClass& a)
      {
	 data = a.data;
	 cout << "\nAssignment operator invoked";
      }
};
int main(){
   MyClass a1(37);
   MyClass a2;

   a2 = a1;
   cout << "\na2="; a2.display();

   MyClass a3(a1);

   cout << "\na3="; a3.display();
   
   getch();
   return 0;
}

