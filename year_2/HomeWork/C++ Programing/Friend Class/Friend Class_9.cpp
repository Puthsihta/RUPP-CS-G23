//Share friend function between classes 

#include<iostream>
#include <conio.h>
using namespace std;
class MyClassB;

class MyClassA
{
  char *name;
public:
		MyClassA(char *s){name=s;}
		 friend void print(MyClassA &,MyClassB &);
};
class MyClassB
{
  char *name;
public:
		 MyClassB(char *s){name=s;}
		 friend void print(MyClassA &,MyClassB &);
};
void print(MyClassA &a,MyClassB &b)
{
  cout<<"the MyClassA is"<<a.name<<endl;
  cout<<"the MyClassB is"<<b.name<<endl;
}
int main()
{
		 MyClassA s("Li Hu");
		 MyClassB t("Wan Ping");
		 print(s,t);
		 
		 getch();
       return 0;
}

