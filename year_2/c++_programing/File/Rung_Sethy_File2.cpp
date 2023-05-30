#include <iostream>
#include <fstream>
#include<conio.h>

using namespace std;

int main()
{
    string fName;
    fstream fs;
    char ch;

    cout << "------------------------------\n"
         << endl;
    cout << "Please Enter file name: ";
    cin.seekg(0);
    getline(cin, fName);
    cout << "\n------------------------------\n"
        << endl;

    fs.open(fName,ios::in|ios::out|ios::trunc);
    cout<<"Write File: \n"<<endl;
    while ((ch = cin.get()) != '~')
    {
        fs.put(ch);
    }

    fs.seekg(0, ios::beg);

    cout<<"\n\n\nRead File: \n"<<endl;
    while (!fs.eof())
    {
            ch = fs.get();
            cout << ch;
    }
    fs.close();

    getch();
    return 0;
}
