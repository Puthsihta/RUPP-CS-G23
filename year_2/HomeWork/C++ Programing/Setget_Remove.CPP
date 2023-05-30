#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee{
   private:
      char id[20];
      char name[20];
      char sex;
      float salary;
   public:
      char *getId(){return id;}
      char *getName(){return name;}
      char  getSex(){return sex;}
      float getSalary(){ return salary;}

      void setId(char *i){ strcpy(id,i); }
      void setName(char *n){strcpy(name,n);}
      void setSex(char s) {sex=s;}
      void setSalary(float s){salary =s;}
      void output();
      void input();
      float tax();
     static void header(){
	cout<<"\nId\tName\tSex\tSalary\n";
      }
};
void Employee::input(){
  cout<<"Enter id="; cin.seekg(0);
  cin.get(id,20);
  cout<<"Enter name="; cin.seekg(0);
  cin.get(name,20);
  cout<<"Enter sex=";cin>>sex;
  cout<<"Enter salary=";cin>>salary;
  }
  void Employee::output(){
  cout<<getId()<<'\t'<<getName()<<'\t'<<
  getSex()<<'\t'<<getSalary()<<endl;
  }
void search(Employee E[],int n){ //Non member function
    int i,k=0;
    char s[20];
    cout<<"Enter name to search=";cin.seekg(0);
    cin.get(s,20);
    for(i=0;i<n;i++)
      if(strcmp(E[i].getName(),s)==0)
      {
	k=k+1;
	Employee::header();
	cout<<E[i].getId()<<'\t'<<E[i].getName()<<'\t'<<
	E[i].getSex()<<'\t'<<E[i].getSalary()<<endl;
      }
      if(k==0)
	cout<<"search not found\n";
    }
void remove1(Employee E[],int n){
  int i,j,k;
  char rev[20];
  Again: 
  cout<<"Enter Name to Remove: ";
  cin.seekg(0); cin.get(rev,20);
  for(i=0;i<n;i++)
  {
    if(strcmpi(E[i].getName(),rev)==0)
    {
      for(j=i;j<n-1;j++)
        E[j]=E[j+1];
      k=1;
    }
  }
  if(k==0)
  {
    cout<<"Not Have this name in list Please Enter Name again"<<endl<<endl;
    goto Again;
  }
}
int main()
{
  int i,n;
  cout<<"Enter n="; cin>>n;
  Employee *Em = new Employee[n];
  for(i=0;i<n;i++)
     Em[i].input();
  cout<<"\n";
  search(Em,n);
  Em[1].setName("Sok");
  Employee::header();
  for(i=0;i<n;i++)
    Em[i].output();
  remove1(Em,n);
  Employee::header();
  for(i=0;i<n-1;i++)
    Em[i].output();
  getch();
  return 0;
}
