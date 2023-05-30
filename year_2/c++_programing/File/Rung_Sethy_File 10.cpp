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
    int n, i;
    person *pers;

    //read file
    ifstream infile("PERSON", ios::binary);
    cout << "\nReading from the file: \n"
         << endl;

    infile.seekg(0, ios::end);
    n = infile.tellg() / sizeof(person);
    pers = new person[n];

    infile.seekg(0, ios::beg);
    for (i = 0; i < n; i++)
    {
        infile.read((char *)(&pers[i]), sizeof(pers[i]));
        pers[i].showData();
    }
    infile.close();

    getch();
    return 0;
}
