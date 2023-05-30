#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class person{
    protected:
        string name;
        int age;
    public:
        void getdata();
        void showdata();
};
 void person::getdata(){
     cout<<"Input Name: "; cin.seekg(0); getline(cin,name);
     cout<<"Input Age: "; cin>>age;
 }
 void person::showdata(){
     cout<<"Name: "<<name<<endl;
     cout<<"Age: "<<age<<endl;
 }
int main(){
    int n,i;
    fstream inout;
    cout<<"Input n: "; cin>>n;
    person *p=new person[n];
    for(i=0;i<n;i++)
    {
        cout<<"Person "<<i+1<<": "<<endl;
        p[i].getdata();
    }
    inout.open("myfile.dat",ios::out|ios::binary|ios::in);
    for(i=0;i<n;i++)
      inout.write((char*)&p[i],sizeof(p[i]));
    cout<<endl;
    inout.seekg(0);
    for(i=0;i<n;i++){
        inout.read((char*)&p[i],sizeof(p[i]));
        p[i].showdata();
    }
    inout.close();
    return 0;
}