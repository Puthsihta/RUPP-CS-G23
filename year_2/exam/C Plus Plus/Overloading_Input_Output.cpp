#include <iostream>
#include <conio.h>
using namespace std;
class Book {  
     private:
             char id[20];
             char title[20];
             char author[25];
             float price;
    public:
              friend ostream &operator<<(ostream &out, Book &b)
              {
              	cout << "ID\t\tTitle\t\tAuthor\t\tPrice\n" << endl;
              	cout << b.id << "\t\t"  <<b.title << "\t\t" << b.author << "\t\t" << b.price << endl;
              }  
               friend ostream &operator>>(ostream &in, Book &b)
               {
				cout << "Enter ID : ";  cin.seekg(0); cin.get(b.id, 20);
				cout << "Enter Title : "; cin.seekg(0); cin.get(b.title, 20);
				cout << "Enter Author : "; cin.seekg(0); cin.get(b.author, 25);
				cout << "Enter Price : "; cin >> b.price;
               }
};
int main()
{
	Book b1;
	Book b2;
	
	getch();
	return 0;
}