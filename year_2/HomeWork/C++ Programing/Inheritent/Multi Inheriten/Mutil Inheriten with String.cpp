#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class cover 
{
	protected :
		 char title[30];
	public:
		cover(char *title)
		{
			strcpy(cover::title, title);
		}
	
};
class page 
{
	protected:
		int  lines;
		char *text ;
	public:
		page(int lines = 77)
		{ 
			page::lines=lines;
		}
};
class book : public cover, public page // inheriten
{
	public:
		book(char *author, char *title, float cost) : cover( title ),page( 55 )
		{
			strcpy(book::author,author);
			strcpy(book::title,title);
			book::cost=cost;
		}
		void show_book()
		{
		  cout<< title <<'\t';
		  cout<< author <<'\t'<< cost;
		}
		private:
			char author[30];
			float cost;
};

int main()
	{
		book text("A","B",77.88);
		text.show_book();
		
		getch();
		return 0;
	}


