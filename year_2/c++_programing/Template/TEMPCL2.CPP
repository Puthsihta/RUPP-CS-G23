#include <iostream.h>

template <class T> 
class Cuboid {
public:
T x , y , z ;
Cuboid (T L, T W, T H){x = L; y = W; z = H ;}
T surface_area( ); 
T volume( ); 
}; 

template <class T > 
T Cuboid <T>::surface_area()
{return 2*(x*y +y*z +z*x);}

template <class T > 
T Cuboid <T>::volume()
{return x*y*z ;}

int main()
{
Cuboid <int> C1(5,6,4); 
Cuboid <double> C2(2.2,3.5,4.5) ; 

cout <<"Volume of C1= " << C1.volume()<<"\n";
cout<<"Volume of C2 = " << C2.volume()<<"\n";

cout<<"surface area of C1 = " << C1.surface_area()<<"\n";
cout<<"surface area of C2 = " << C2.surface_area()<<"\n";
return 0 ;
}