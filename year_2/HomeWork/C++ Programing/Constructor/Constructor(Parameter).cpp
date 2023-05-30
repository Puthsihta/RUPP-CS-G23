#include <iostream>
#include <conio.h>
using namespace std;
class myclass
{
	private:
		int a, b ,c;
	public:
		// parameter constructor
	  myclass(int i, int j,int m)
	  {
		a=i;
		b=j;
		c=m;
	  }
	  void show()
	  {
		cout << "A = " << a << endl;
		cout << "B = " << b  << endl;
		cout << "C = " << c << endl;
	  }
};
int main()
{
  
  myclass ob(3,5,7); // assing value to contructor
  ob.show();
  
  getch();
  return 0;
}

