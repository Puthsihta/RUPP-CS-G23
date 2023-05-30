#include <fstream>
#include <iostream>
#include <conio.h>
using namespace std;
class person
   {
   protected:
      char name[80];
      short age;
   public:
      void getData(){
	 cout << "Enter name: "; cin.get(name,20);
	 cout << "Enter age: ";cin.seekg(0); cin>>age;
	 }
      void showData(){
	 cout << name <<"\t"<< age<< endl;
      }
};
int main(){
   person pers;
   pers.getData();

   fstream outin("PERSON.DAT", ios::binary | ios::out | ios::in);
	outin.write((char*)(&pers), sizeof(pers));

     outin.read((char*)(&pers), sizeof(pers) );
   pers.showData();
   
   getch();
   return 0;
}
