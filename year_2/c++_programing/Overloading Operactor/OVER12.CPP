#include<iostream.h>
#include<string.h>
#include<conio.h>
class Book {
	private:
		char title[20];
		float price;
	public:
		Book(){strcpy(title," ");price=0.0;}
		Book(char *t, float p)
		{ strcpy(title,t);
			price=p;
		}
		void input();
		void output();
		int operator ==(float);
		int operator > (Book &);
		friend int operator <= (Book &b, float);
};

int Book::operator ==(float m)
	{ return (price==m); }

//int Book::operator > (Book &b)
  //	{  return (strcmp(title,b.title)>0); }

int operator <= (Book &b,float m)
	{  return (b.price <=m); }

void Book::input()
  {
	  cout<<"Title:";cin.seekg(0);
	  cin.get(title,20);
	  cout<<"Price:";cin>>price;
  }
void Book::output()
	{
		cout<<title <<"\t"<<price<<endl;
	}
void search(Book b[],int n ,float p)
  {
	  int k=0;
	  for(int i=0;i<n;i++)
	     if(b[i]==p)
		{
			  k++;
			b[i].output();
		}
	  if(k==0)
		  cout<<"Search not found"<<endl;
  }
void show(Book b[],int n,float m)
  {
	 for(int i=0;i<n;i++)
		if(b[i]<=m)
			b[i].output();
  }

void main()
 {
	clrscr();
	int n;
	Book b[20];
	cout<<"Input number of book:"; cin>>n;
	cout<<"Input data of books :"<<endl;
	for(int i=0;i<n;i++)
		{
		  cout<<"Book:"<<(i+1)<<":";
		  b[i].input();
		}
	for(i=0;i<n;i++)
		b[i].output();
	       search(b,n,24.4);
		show(b,n,90.0);
 }
