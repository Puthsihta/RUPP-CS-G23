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

   ofstream outfile("PERSON.DAT", ios::binary);
	outfile.write((char*)(&pers), sizeof(pers));
	outfile.close();

   ifstream infile("PERSON.DAT", ios::binary);

   infile.read((char*)(&pers), sizeof(pers) );
   pers.showData();
   outfile.close();
   getch();
   return 0;
}


