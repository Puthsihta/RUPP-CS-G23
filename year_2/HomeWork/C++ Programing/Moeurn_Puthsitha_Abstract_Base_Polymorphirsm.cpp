#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class Animal
{
public:
	virtual void eat();
	virtual void sound();
};
void Animal :: eat()
{
	
}
void Animal :: sound()
{
	
}
class Dog : public Animal
{
public :
	void eat();
	void sound();
	
};
void Dog :: eat()
{
	cout << "Dog eat Cat!\n" << endl;
}
void Dog :: sound()
{
	cout << "Dog sound like ___V00000___" << endl;
}
class Cat : public Animal
{
public :
	void eat();
	void sound();
};
void Cat :: eat()
{
	cout << "Cat eat rice" << endl;
}
void Cat :: sound()
{
	cout << "Cat sound like ____Moew_____" << endl;
}
int main()
{
	int n;
	Animal an;
	Dog dg;
	Cat ct;
	
	Animal *pnt;
	//pnt = new Animal[n];
	
	Dog *d = new Dog[n];
	Cat *c = new Cat[n]; 
	
	cout << "Enter N : "; cin >> n;
	
	for(int i=0; i<n; i++)
	{
		pnt  = &d[i];
		pnt -> eat();
		pnt -> sound();
	}
	
	for(int i=0; i<n; i++)
	{
		pnt = &c[i];
		pnt -> eat();
		pnt -> sound();
	}
	
	getch();
	return 0;
}