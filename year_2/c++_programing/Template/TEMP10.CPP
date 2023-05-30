#include <iostream.h>
template <class T, class U>
U Product ( T x, U y)
{return x*y;}

template <class T, class S, class U>
S Product ( T x, S y, U z)
{return x*y*z;}

int main ()
{ int a (1);
double B(1.5);
char Ch('D');
cout<<"Product (a,B,Ch) = "<< Product (a,B,Ch)<< endl;
cout<<"Product (a,B) = "<< Product (a,B)<< endl;
cout<<"Product('A',4.5,6)="<<Product ('A', 4.5, 6)<<endl;
return 0;
}