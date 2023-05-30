#include<iostream.h>
#include<conio.h>
class student{
	private:
		int id;
		char name[20];
		char sex;
	public:
		void input(){
		cout<<"Enter id=";cin>>id;
		cout<<"Enter name=";cin.seekg(0);
		cin.get(name,20);
		cout<<"Enter sex=";cin>>sex;
		}
		void output(){
		cout<<id<<'\t'<<name<<'\t'<<sex<<'\t';
		}
	class Dob{
		private:
			int day;
			int month;
			int year;
		public:
			void input(){
			cout<<"Enter day=";cin>>day;
			cout<<"Enter month";cin>>month;
			cout<<"Enter year";cin>>year;
			}
			void output(){
		cout<<day<<'\t'<<month<<'\t'<<year<<'\t';
			}

	};
};
void main(){
	clrscr();
	int i,n;
	student st[20];
	student::Dob dob[20];
	cout<<"Enter n=";cin>>n;
	for(i=0;i<n;i++)
	{
	  st[i].input();
	  dob[i].input();
	}
	clrscr();
     cout<<"\nId\tName\tSex\tDay\tMonth\tYear\n";
	  for(i=0;i<n;i++)
	  {
	    st[i].output();
	    dob[i].output();
	  }
}


