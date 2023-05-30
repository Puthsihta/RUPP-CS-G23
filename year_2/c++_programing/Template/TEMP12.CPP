#include<iostream.h>
#include<conio.h>
template <class t1,class t2,class t3>
class show {
    private:  t1 x; t2 y; t3 z;
    public:  void input();
	     void max();
};
template <class t1,class t2,class t3>
void show<t1,t2,t3>::input()
{
   cout<<"x="; cin>>x;
   cout<<"y="; cin>>y;
   cout<<"z="; cin>>z;
}
template <class t1,class t2,class t3>
void show<t1,t2,t3>::max()
{
  t1 t;
  t=x;
  if(t<y)
    t=y;
  if(t<z)
    t=z;
   cout<<"Max="<<t<<endl;
}
void main()
{
    show<int,int,int> obj1;
    obj1.input();
    obj1.max();
    show<float,float,float> obj2;
    obj2.input();
    obj2.max();
getch();
}

