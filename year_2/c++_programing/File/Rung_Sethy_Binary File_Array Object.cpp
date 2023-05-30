#include <fstream>
#include <iostream>
#include <conio.h>

using namespace std;

class student {
   private:
             char id[10];
             char name[20];
             char sex;
             float score;
	public:
       void getData()
       {
       	cout << "Enter ID : "; cin.seekg(0); cin >> id;
       	cout << "Enter Name : "; cin.seekg(0); cin >> name;
       	cout << "Enter Sex : "; cin >> sex;
       	cout << "Enter Score : "; cin >> score;
       }
       void showData()
       {
       	cout << id << "\t\t" << name << "\t\t" << sex << "\t\t" << score << endl;
       }
};

int main()
{
    int n, i;
    cout << "Enter number of students : ";
    cin >> n;
    student *stud = new student[n];

    //input data to obj
    for (i = 0; i < n; i++)
    {
        int j = i + 1;
        cout << "Student" << j << " : " << endl;
        stud[i].getData();
    }

    //write file
    fstream file("Student", ios::binary | ios::in | ios::out | ios::trunc);
    cout << "\nStoring on the file ... \n";
    for (i = 0; i < n; i++)
    {
        file.write((char *)(&stud[i]), sizeof(stud[i]));
    }

    file.seekg(0, ios::beg);

    //read file
    cout << "\nReading from the file: \n" << endl;
    for (i = 0; i < n; i++)
    {
        file.read((char *)(&stud[i]), sizeof(stud[i]));
        stud[i].showData();
    }
    file.close();

    getch();
    return 0;
}
