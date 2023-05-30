#include <iostream>
#include <conio.h>
using namespace std;
template <class t1, class t2, class t3>
class show
{
private:
	t1 x;
	t2 y;
	t3 z;
public:
	void input();
	void max();
};
template <class t1, class t2, class t3>
void show <t1, t2, t3>::input()
{
	cout << "Enter X : "; cin >> x;
	cout << "Enter Y : "; cin >> y;
	cout << "Enter Z : "; cin >> z;
}
template <class t1, class t2, class t3>
void show <t1, t2, t3>:: max()
{
	t1 t;
	t = x;
	if(y<y)
	{
		t = y;
	}else
	{
		t = z;
	}
	cout << "Maximum = " << t << endl;
}
int main()
{
	show <int, int, int> obj1;
	obj1.input();
	obj1.max();
	show <float, float, float> obj2;
	obj2.input();
	obj2.max();
	getch();
	
	return 0;
}