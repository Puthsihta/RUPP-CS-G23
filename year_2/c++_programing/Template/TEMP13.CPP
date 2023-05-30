#include<iostream.h>
#include<conio.h>
template <class t>
 class Max {
	private: t x,y,z;
	public: void input()
	    {
	     cout<<"x=";cin>>x;
	     cout<<"y= ";cin>>y;
	     cout<<"z=";cin>>z;
	    }
	t Max1();
 };
 template <class t>
 t Max<t>:: Max1()
 {  t m;
    m=x;
    if(m<y)
       m=y;
    if(m<z)
      m=z;
    return m;
 }
 void main()
 {
    Max<int> obj1;
    obj1.input();
    cout<<"Max="<<obj1.Max1()<<endl;
    Max<float> obj2;
    obj2.input();
    cout<<"Max="<<obj2.Max1()<<endl;
    getch();
 }
