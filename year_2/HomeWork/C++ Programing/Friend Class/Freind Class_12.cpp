#include<iostream>
#include <conio.h>
using namespace std;
class first{
    friend class second;
    public:

       void dispay(second obj)
       {
	 		cout<<" Object of second = " << obj.y <<endl;
       }
 };
 class second{
   private:
      int y;
   public:
      void gerdata(){
	cout<<"Enter a value for y=\n";
	cin>>y;
	}
 };
 int  main()
 {
    first obx;
    second oby;
    obx.getdata();
    oby.display(obx);
    
    getch();
    return 0;
 }
