#include<iostream.h>
template<class t1,class t2>
 class show{
	private: t1 x; t2 y;
	public:
	  void input();
	  void output();
 };
 template<class t1,class t2>
 void show<t1,t2>::input(){
	cout<<"x=";cin>>x;
	cout<<"y=";cin>>y;
 }
 template<class t1,class t2>
 void show<t1,t2>::output(){
	cout<<x<<"\t"<<y<<endl;
 }
 void main()
 {
	show<int ,int>obj1;
	obj1.input();
	obj1.output();

	show<int,float>obj2;
	obj2.input();
	obj2.output();

	show<float ,char>obj3;
	obj3.input();
	obj3.output();
 }
