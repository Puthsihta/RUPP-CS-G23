#include <iostream>
#include <conio.h>
using namespace std;
template <class t, class t1, class t2>
class myClass
{
private:
	t x;
	t1 y;
	t2 z;
public:
	void input()
	{
		cout << "\n\n\tInput\n\n";
		cout << "\tEnter X : "; cin >> x;
		cout << "\tEnter Y : "; cin >> y;
		cout << "\tEnter Z : "; cin >> z;
	}
	void sum();
};

template <class t, class t1, class t2>
void myClass <t, t1, t2> :: sum()
{
	t1 s; //t s; //t2 s;
	
	s = x + y + z;
	
	cout << "\n\n\tSum = " << s << endl;
}
int main()
{
	cout << "\t\tInteger\n";
	myClass <int, int, int> obj1;
	obj1.input();
	obj1.sum();
	
	cout << "\n\n\t\tFloat\n";
	myClass <float, float, float> obj2;
	obj2.input();
	obj2.sum();
	
	cout << "\n\n\t\tMix(Float Middle)\n";
	myClass <int, float, int> obj3;
	obj3.input();
	obj3.sum();
	
	cout << "\n\n\t\tMix(Integer Middle)\n";
	myClass <float, int, float> obj4;
	obj4.input();
	obj4.sum();
	
	cout << "\n\n\t\tMix(Integer First Only)\n";
	myClass <int, float, float> obj5;
	obj5.input();
	obj5.sum();
	
	cout << "\n\n\t\tMix(Float First Only)\n";
	myClass <float, int, int> obj6;
	obj6.input();
	obj6.sum();
	
	cout << "\n\n\n\n\t\t..........To Be Cont.........\n\n\n\n";
	
	getch();
	return 0;
}