#include <iostream>
#include <fstream>
using namespace std;

#include <iostream>
#include <fstream>
using namespace std;

 class person {
     private:
        string name;
        int age;
     public:
        void input() {
            cout << "Enter name: "; cin.seekg(0); getline(cin,name);
            cout << "Enter age: "; cin >> age;
        }
        void output() {
            cout << name << '\t' << age << endl;
        }
 };
 int main () {
     int n;
     cout << "Enter n: "; cin >> n;
     person *per = new person[n];
     fstream file;
     for(int i=0; i < n; i++) {
        cout << endl;
        cout << "Person [" << i+1 <<"] " << endl;
        per[i].input();
        fstream file("Bin-File-3.bin",ios::binary | ios::out | ios::in | ios::trunc);
        file.write((char*)(&per),sizeof(per));
     }
     file.seekg(0,ios::beg);
     cout << endl << "Name" << '\t' << "Age" << endl << endl;
     for(int i=0; i < n; i++) {
        file.read((char*)(&per),sizeof(per));
            per[i].output();
            file.close();
     }
  return 0;
 }