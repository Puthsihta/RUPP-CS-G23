	
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

class Book 
{
  public: 
	 char title[20];
	 char author[20];
	 float price;
	 Book(char *btitle, char *bauthor, char *bpublisher, float bprice);
	 void show_title(void)
	 {
	 	 cout << title << '\n'; 
	 };
	 float get_price(void) 
	 { 
	 	return(price); 
	 };
	 void show_book(void) 
	 { 
		cout<<title<< author << publisher << price <<endl;
		//show_title();
		//show_publisher();
		
	 };
	 void assign_publisher(char *name) 
	 { 
	 	strcpy(publisher, name); 
	 };
  	private:
		 char publisher[25];
		 void show_publisher(void) 
		 { 
		 	cout << publisher << '\n'; 
		 };
};

Book::Book(char *btitle, char *bauthor, char *bpublisher, float bprice)
{
	strcpy(title, btitle);
	strcpy(author, bauthor);
	strcpy(publisher, bpublisher);
	price = bprice;
}

int main(void)
{
	Book tips("A", "B", "C", 49.95);
	Book diary("D", "E", "F", 9.95);
	tips.show_book();
	diary.show_book();
	
	getch();
  	return 0;
}
