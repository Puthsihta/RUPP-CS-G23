#include <fstream>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
class person
   {
   protected:
      string name;
      int age;
   public:
      void getData(){
	 cin.seekg(0);
	 cout << "Enter name: "; cin.seekg(0); getline(cin, name);
	 cout << "Enter age: ";cin>>age;
	 }
      void showData(){
	 cout << name <<"\t"<< age<< endl;
      }
};
int main(){
    
    person *Write,Read;
   int num;
   ofstream out("PERSON.DAT", ios::binary);

     cout<<"How mony student="; cin>>num;
     Write =new person[num];
     for(int i=0;i<num;i++)
     {
       Write[i].getData();
	out.write((char*)(&Write[i]), sizeof(person));
     }
     out.close();
     ifstream in("PERSON.DAT",ios::binary);

     cout<<"Readint Student"<<endl;
     while(in.read((char*)(&Read), sizeof(Read))){
       Read.showData();
     }
     in.close();
   getch();
   return 0;
}


