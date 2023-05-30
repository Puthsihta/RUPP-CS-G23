#include <iostream>
#include <conio.h>
using namespace std;

	class Cuboid {
	friend class paint; // Declaration of friend class
		public:
			void sides(int , int, int);
			int Area();
			int volume();
			int x , y, z;
}; //end of class Cuboid

	void Cuboid:: sides (int L, int W, int H )
		{x = L, y = W,z = H; } // Setting the sides of Cuboid
	int Cuboid::Area(){return 2*(x*y +y*z +z*x);}
	int Cuboid::volume() {return x*y*z ;}
	class paint{ 
		private:
			int R;
		public:
			paint () { R = 1;} 
			paint ( int S) { R = S;}
			Cuboid C; 
			int area (){return C.Area ();}
			int cost(int R , Cuboid C ) {return R* C.Area () ;} 
};

	int main()
	{
		Cuboid C1 ; // C1 is object of class Cuboid
		C1.sides (5,6,5 );
		paint P1 ; // P1 is object of class paint
		int k = 4;
		cout <<"Volume of C1 = "<<C1.volume()<<"\n";
		cout<<"Surface area of C1 = "<<C1.Area()<<"\n";
		cout<<"Cost of painting P1 ="<< P1.cost(k, C1)<<"\n";
		
		getch();
		return 0 ;
	}