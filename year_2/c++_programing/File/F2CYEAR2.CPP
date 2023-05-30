#include <fstream>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class person
   {
   protected:
      string name;
      int age;
   public:
      void getData(){
	 cin.seekg(0);
	 cout << "Enter name: "; cin.seekg(0); getline(cin,name);
	 cout << "Enter age: "; cin>>age;
	 }
      void showData(){
	 cout << name <<"\t"<< age<< endl;
      }
};
int main()
{
    
    person *pers;
   int num;
   fstream outin("PERSON.DAT", ios::binary | ios::out | ios::in);

     cout<<"How mony student="; cin>>num;
     pers =new person[num];
     for(int i=0;i<num;i++)
     {
       pers[i].getData();
	outin.write((char*)(&pers[i]), sizeof(person));
     }

     cout<<"Readint Student"<<endl;
     for( int i=0; i<num;i++){
     outin.read((char*)(&pers[i]), sizeof(person));
       pers[i].showData();
     }
     outin.close();
   getch();
   return 0;
}


