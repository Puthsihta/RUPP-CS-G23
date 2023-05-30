#include <iostream.h>

template <class T>

class Cuboid {
T x , y , z ; 
public:
Cuboid(T L, T W, T H){x = L; y = W; z = H ;}
T surface_area( )
{return 2*(x*y +y*z +z*x); }
T volume( ) { return x*y*z ;}
};

int main()
{
 Cuboid <int> C1(3,8,5); 
 Cuboid < double> C2(3.5,5.5,4.5) ; 
 cout <<"Volume of C1= "<<C1.volume()<<"\n";
 cout<<"Volume of C2 = "<<C2.volume()<<"\n";
 cout<<"surface area of C1 ="<<C1.surface_area()<<"\n";
 cout<<"surface area of C2 ="<<C2.surface_area()<<"\n";
return 0 ;
}
