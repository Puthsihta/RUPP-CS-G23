#include <iostream>
#include<conio.h>
using namespace  std;
class Max{
	private:
		int x, y, max = 0;
	public :
	void Maxi()
	{
		if(x>y)	
		{
			max = x;
			cout << "Max = " << x << endl;
		}else
		{
			max = y;
			cout << "Max = " << x << endl;
		}
	} 
};
int main()
{
	Max V1( 3,6,9);
	Max V2( 6.6, 9.9, 3.3);
	Max V3(5453,4545,4633);
	
	V1.Maxi();
	V2.Maxi();
	V3.Maxi();
	
	getch();
	return 0;
}





