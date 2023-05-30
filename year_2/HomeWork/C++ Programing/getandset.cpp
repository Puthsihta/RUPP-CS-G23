#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Employee
{
private:
	int id;
	char name[18];
	char sex;
	float salary;
public:
	int getId(){return id;}
	char *getName(){return name;}
	char getSex(){return sex;}
	float  getSalary(){return salary;}
	
	void setId(int i){id = i; }
	
	void setName(char *n)  {  strcpy(name, n);}
	void setSex(char s){sex = s;}
	void setSalary(float s){salary = s; }
	void output();
};
void Employee::output()
{
	cout << getId() << "\t" << getName() << "\t" << getSex() << "\t" << getSalary() << endl;
}
// Static mean not acces with Obj ta // វាចូលរួមដំណើរការ
// Static can be header Line // acces only Once_Time
// Dynamic Array using New Function;
//set =    implementor
// get =  accessor
// not meber = Not acces with  Obj
//  non Meber function = 
int main()
{
	Employee sam ;
	
	sam.setId(1);
	sam.setName("Mouern");
	sam.setSex('M');
	sam.setSalary(453.34);
	sam.output();
	sam.setSex('F');
	sam.output();
	
	getch();
	return 0;
}