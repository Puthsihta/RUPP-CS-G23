#include<fstream.h>
#include<conio.h>
#include<string.h>
class Employee{
  private:
	int id,age;
	char name[20];
	float rate,hours;
  public:
    Employee()
    {
    id=0;strcpy(name,"Nasun");age=20;rate=0.0;hours=0.0;
    }
    Employee(int i,char *n,int a,float r,float h);

friend ostream &operator<<(ostream& out, Employee & emp);
friend istream &operator>>(istream& in, Employee & emp);

	float income();
};
Employee::Employee(int i,char *n,int a ,float r,float h)
{
	id=i;
	strcpy(name,n);
	age=a;
	rate=r;
	hours=h;
}
ostream & operator <<(ostream & out,Employee &emp)
{
	out<<"ID =" << emp.id<<endl;
	out<<"Name="<<emp.name<<endl;
	out<<"Age="<< emp.age<<endl;
	out<<"Rate="<<emp.rate<<endl;
	out<<"Hours="<<emp.hours<<endl;
	out<<"INCOME="<<emp.income()<<endl;
	return out;
}
istream & operator >>(istream & in,Employee &emp)
{
	cout<<"Input id="; in>>emp.id;
	in.seekg(0);
	cout<<"Input Name="; in.get(emp.name,20);
	cout<<"Input Age="; in>>emp.age;
	cout<<"Input Rate="; in>>emp.rate;
	cout<<"Input Hours="; in>>emp.hours;
	return in;
}
float Employee:: income()
{
	return (rate*hours);
}
void main()
{
	clrscr();
	Employee e[20];
	int n;
	cout<<"Enter n=";cin>>n;
	for(int i=0;i<n;i++)
	cin>>e[i];

	for( i=0;i<n;i++)
	cout<<e[i];
}

