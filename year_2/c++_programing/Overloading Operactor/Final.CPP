#include <iostream>
#include <conio.h>
using namespace std;
const int n = 5;
   class List {
     friend ostream & operator<<( ostream & , List & ) ;
     friend istream & operator>>( istream & , List & ) ;
     float x[n] ;
	public :
		List(){};
		List (float a[n])
			{
				for(int i=0; i<5;i++)
				x[i] = a[i];
			}
		float operator /=(int m)
		 {
		 	int i;
			for ( int i =0; i<5; i++)
			   x[i] = x[i]/m;
			return x[i];
		 }
} ; // End of class

  istream & operator>> ( istream &In, List&L)
	{ 
		
		for ( int i = 0 ; i< n ; i++) 
		In >> L.x[i]; 
		return In;
	}
  ostream & operator<< ( ostream &Put, List &L ) 
	{
		Put<<"("<<L.x[0]; 
		for ( int i = 1; i<n; i++) 
		Put<<","<< L.x[i] ; 
		Put<<")";
		return Put ;
	}
int main()
{
  List L1 , L2;
  float B[n] ={2.2,3.3,4.4,5.5,6.6};
  cout<<"Put in"<<n<<"elements of L2: ";
  cin>> L2;
  L1 = B ;
  L1 /=2;
  cout<<L1<<"\n";
  L2 /=3;
  cout<<L2 <<endl;
  getch();
  return 0;
}