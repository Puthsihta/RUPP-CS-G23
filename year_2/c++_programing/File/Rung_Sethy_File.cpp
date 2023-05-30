#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

void writeFile(string file_name)
{
    fstream oFile;
    char ch;
    oFile.open(file_name, ios::out)
    while ((ch = cin.get()) != '~')
        oFile.put(ch);
    oFile.close();
}

void readFile(string file_name)
{

    fstream inFile;
    char ch;
    inFile.open(file_name, ios::in);
    if (inFile.fail() == 0)
    {
        while (!inFile.eof())
        {
            ch = inFile.get();
            cout << ch;
        }
        inFile.close();
    }
    else
    {
        cout << "Could't open this file." << endl;
    }
}

void appendFile(string file_name)
{
    fstream appFile;
    char ch;
    appFile.open(file_name, ios::app);
    if (appFile.fail() == 0)
    {
        while ((ch = cin.get()) != '~')
            appFile.put(ch);
        appFile.close();
    }
    else
    {
        cout << "Could't open this file." << endl;
    }
}

int main()
{
    string file_name;
    char op;
    while (1)
    {
        cout<<"=============================="<<endl;
        cout << "\n[1]: Write File " << endl;
        cout << "[2]: Read File " << endl;
        cout << "[3]: Append File " << endl;
        cout << "[4]: Exit Program " << endl;
        cout << "\nEnter Number: ";
        cin.seekg(0);
        cin >> op;

        switch (op)
        {
        case '1':
            cout << "Enter File Name: ";
            cin.seekg(0);
            getline(cin, file_name);
            cout<<"\n==============================\n"<<endl;
            cout << endl
                 << endl;
            writeFile(file_name);
            break;
        case '2':
            cout << "Enter File Name: ";
            cin.seekg(0);
            getline(cin, file_name);
            cout<<"\n==============================\n"<<endl;
            cout << endl
                 << endl;
            readFile(file_name);
            break;
        case '3':
            cout << "Enter File Name: ";
            cin.seekg(0);
            getline(cin, file_name);
            cout<<"\n==============================\n"<<endl;
            cout << endl
                 << endl;
            appendFile(file_name);
            break;
        case '4':
            return 0;
            break;
        default:
            cout << "Please enter number from 1 to 4." << endl;
            getch();
        }
        cout << endl<< endl<< endl<< endl;
    }
    getch();
    return 0;
}
