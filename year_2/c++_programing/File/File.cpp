#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
void write(char file[]){
    fstream infile;
    char c;
    infile.open(file,ios::out);
    while((c=cin.get())!='%')
        infile.put(c);
    infile.close();
}
void read(char file[]){
    fstream outfile;
    char c;
    outfile.open(file,ios::in);
    while (!outfile.eof())
    {
        c=outfile.get();
        cout<<c;
    }
    outfile.close();
}

int main(){
    char c,file[100];
    int o;
    do{
        cout<<"-----Input 1 for Write-----"<<endl;
        cout<<"-----Input 2 for Read-----"<<endl;
        cout<<"-----Input 0 for Exit-----"<<endl;
        cout<<"Input Here: ";cin>>o;
        switch (o)
        {
        case 1:
            cout<<"File Name: ";cin.seekg(0);cin.get(file,100);
            write(file);
            break;
        case 2: 
            cout<<"File Name: ";cin.seekg(0);cin.get(file,100);
            read(file);
            break;
        }
    } while (o);
    return 0;
}