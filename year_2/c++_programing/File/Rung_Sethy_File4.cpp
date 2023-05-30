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
    fstream file("PERSON", ios::binary | ios::out | ios::in | ios::trunc);
    cout << "\nStoring on the file ... \n";
    file.write((char *)(&pers), sizeof(pers));

    file.seekg(0, ios::beg);

    //read file
    cout << "\nReading from the file: \n"
         << endl;
    file.read((char *)(&pers), sizeof(pers));
    pers.showData();
    file.close();

    getch();
    return 0;
}
