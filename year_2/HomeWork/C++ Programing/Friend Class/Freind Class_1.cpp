#include<iostream>
#include <conio.h>
using namespace std;
class first{
    friend class second;
    private:
       int x;
    public:
       void getdata();
 };
 class second{
   public:
      void disp(class first temp);
 };
 void first::getdata(){
    cout<<"Enter a number ?\n"; cin>>x;
    }
 void second::disp(class   first temp){
   cout<<"Enter number is  "<<temp.x<<endl;
 }
 int main()
 {
    first obx;
    second oby;
    obx.getdata();
    oby.disp(obx);
    
    getch();
    return 0;
 }
