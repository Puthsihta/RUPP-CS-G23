#include <fstream>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class person
   {
   protected:
      char name[80];
      short age;
   public:
      void getData(){
	 cin.seekg(0);
	 cout << "Enter name: "; cin.get(name,20);
	 cout << "Enter age: ";cin.seekg(0); cin>>age;
	 }
      void showData(){
	 cout << name <<"\t"<< age<< endl;
      }
};
int main(){
    
    person *Write,Read;
   int num;
   fstream outin("PERSON.DAT", ios::binary |ios::out | ios::in);

     cout<<"How mony student="; cin>>num;
     Write =new person[num];
     for(int i=0;i<num;i++)
     {
       Write[i].getData();
	outin.write((char*)(&Write[i]), sizeof(person));
     }
     outin.seekg(0,ios::beg);
     cout<<"Readint Student"<<endl;
     while(outin.read((char*)(&Read), sizeof(person))){
       Read.showData();
     }
     outin.close();
   getch();
   return 0;
}