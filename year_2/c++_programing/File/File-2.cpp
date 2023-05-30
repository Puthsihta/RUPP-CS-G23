#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream in;
    ofstream out;
    int n,i;
    char ch;
    cout<<"Enter number for choice"<<endl;
    cout<<"Number 1 for Write"<<endl;
    cout<<"Number 2 for Read"<<endl;
    cout<<"Number :"; cin>>n;
        if(n==1){
            out.open("File-2.txt");
             cout<<"Enter your Text here: ";
              while((ch=cin.get())!='$')
                out.put(ch);
            out.close();
        }
        if(n==2){
            in.open("File-2.txt");
             cout<<"Your Text: ";
              while(!in.eof()){
                  ch=in.get();
                  cout<<ch;
              }
            in.close();
        }
 return 0;
}