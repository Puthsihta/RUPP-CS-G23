//Illustrates overloading of [ ] operator.
#include <iostream.h>
#include <stdlib.h>
const int n = 5;
class List {
     friend ostream & operator << ( ostream & , List & ) ;
		int x[n] ; // private by default
     public :
	void Setvalues (int a[n] )
	{
	  for ( int j = 0; j< n; j++)
	  x[j] = a[j] ;
	}
	int operator [](int k)
	{
	  if (k <0 || k > n)
	   {  cout <<"Array index k is out of bound";
	      exit (0);
	   }
	   return x[k];
	}
}; 
 ostream & operator<< (ostream &Put , List &L )
  {
    Put<<"The components are :("<<L.x[0];
	for ( int i = 1; i<n; i++)
	  Put<<", "<< L.x[i] ;
	  Put<<")";
    return (Put) ;
  }

int main()
{
	List L1 ;
	int B1[] = {11, 12, 13, 14,15};
	L1.Setvalues (B1);
	cout<< L1 <<endl;
	cout<< L1[2] << endl;
	cout<<"The following result is for L1[7] "<<endl;
	cout<< L1[7]<<endl;
	return 0;
}