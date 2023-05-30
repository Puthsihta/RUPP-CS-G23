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
    void getData()
    {
        cout << "Enter name: ";
        cin.seekg(0);
        cin.get(name, 20);
        cout << "Enter age: ";
        cin.seekg(0);
        cin >> age;
    }
    void showData()
    {
        cout << name << "\t\t" << age << endl;
    }
};

int main()
{
    person pers;
    //input data to obj
    pers.getData();

    //write file
    fstream outfile("PERSON", ios::binary | ios::out);
    cout << "\nStoring on the file ... \n";
    outfile.write((char *)(&pers), sizeof(pers));
    outfile.close();

    //read file
    cout << "\nReading from the file: \n"
         << endl;
    fstream infile("PERSON", ios::binary | ios::in);
    infile.read((char *)(&pers), sizeof(pers));
    pers.showData();
    infile.close();

    getch();
    return 0;
}
