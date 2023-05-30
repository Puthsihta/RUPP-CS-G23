#include <iostream>
#include <conio.h>
using namespace std;
template <class t,class t1,class t2>
class myClass
{
private:
	t x;
	t1 y;
	t2 z;
public:
	void input()
	{
		cout << "\n\n\tInput\n";
		cout << "\nEnter X : "; cin >> x;
		cout << "Enter Y :"; cin >> y;
		cout << "Enter Z : "; cin >> z;
	}
	void output();
};
template <class t,class t1,class t2>
void myClass<t, t1, t2> :: output()
{
	cout << "\n\n\tOutput";
	cout << "\nX = " << x << endl;
	cout << "Y = " << y << endl;
	cout << "Z = " << z << endl;
}
int  main()
{
	myClass <int, int, int> bj1;
	cout << "\t\tInteger\n\n";
	bj1.input();
	bj1.output();
	
	cout << "\t\tCharacter\n\n";
	myClass <char, char, char> bj2;
	bj2.input();
	bj2.output();
	
	cout << "\t\tFloat\n\n";
	myClass <float, float, float> bj3;
	bj3.input();
	bj3.output();
	
	cout << "\tInterger\tCharacter\tFloat\n\n";
	myClass <int, char[18], float> bj4;
	bj4.input();
	bj4.output();
	
	getch();
	return 0;
}