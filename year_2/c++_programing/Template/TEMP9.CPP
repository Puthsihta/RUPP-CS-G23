#include <iostream.h>

template <class T>
T Product (T x, T y)
{return x*y;}

template <class T>
T Product ( T x, T y, T z)
{return x*y*z;}

int main ()
{ int a =(2), b=(3), c=(4);
double A=(2.0), B=(5.5), C=(1.5);
cout<<"Product (A,B,C) = "<< Product (A,B,C)<< endl;;
cout<<"Product ( A,B ) = "<< Product ( A,B )<< endl;
cout<<"Product (a,b,c) = "<< Product ( a,b,c)<<endl;
return 0;
}