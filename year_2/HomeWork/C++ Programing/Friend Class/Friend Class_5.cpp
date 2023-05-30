#include<iostream>
#include<conio.h>
using namespace std;
class sample{
	private:
		int x;
	public:
		void getdata();
		friend void display(sample ob){
		cout<<"Enter number is"<<ob.x<<endl;
		}
};
void  sample::getdata(){
	cout<<"Enter a value for x\n";
	cin>>x;
	}
int main()
{
	sample obj;
	obj.getdata();
	cout<<"Accessing the private data by";
	cout<<"non-member function.\n";
	display(obj);
	
	getch();
	return 0;
}


