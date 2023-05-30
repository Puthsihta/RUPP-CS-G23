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

     for(int i=0; i < n; i++) {
        cout << endl;
        cout << "Person [" << i+1 <<"] " << endl;
        per[i].input();
        ofstream out("Bin-File-3.bin",ios::binary);
        out.write((char*)(&per),sizeof(per));
        out.close();
     }
     cout << endl << "Name" << '\t' << "Age" << endl << endl;
     for(int i=0; i < n; i++) {
        ifstream in("Bin-File-3.bin",ios::binary);
        in.read((char*)(&per),sizeof(per));
            per[i].output();
            in.close();
     }
  return 0;
 }