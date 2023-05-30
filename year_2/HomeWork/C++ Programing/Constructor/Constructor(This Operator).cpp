#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
class MyClass
{
 public:
   MyClass(int a=1 , float b=2.50 , char *c="asd" ){
		  this->a = a;  // MyClass::a=a;//a=aa;
		  this->b = b;
		  strcpy(this->c,c);
	}
   void show_numbers(){
	cout << a << ' ' << b << ' '<< c << '\n';
	}
 private:
	int a;
	float b;
	char c[20];
};
int  main(){
       MyClass one(1,34.5,"sok");
       MyClass defaults;

       MyClass happy(101, 99.00, "chan dara");

       one.show_numbers();
       defaults.show_numbers();
       happy.show_numbers();
       
       getch();
       return 0;
   }
