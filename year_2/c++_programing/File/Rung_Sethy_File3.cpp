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
  void
  getData()
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
  cout << "Enter number of Person do you to input: ";
  cin >> n;
  person *pers = new person[n];

  //input data to obj
  for (i = 0; i < n; i++)
  {
    int j = i + 1;
    cout << "Person" << j << " : " << endl;
    pers[i].getData();
  }

  //write file
  ofstream outfile("PERSON", ios::binary);
  cout << "\nStoring on the file ... \n";
  for (i = 0; i < n; i++)
  {
    outfile.write((char *)(&pers[i]), sizeof(pers[i]));
  }
  outfile.close();

  //read file
  ifstream infile("PERSON", ios::binary);
  cout << "\nReading from the file: \n"
       << endl;
  for (i = 0; i < n; i++)
  {
    infile.read((char *)(&pers[i]), sizeof(pers[i]));
    pers[i].showData();
  }
  infile.close();

  getch();
  return 0;
}
