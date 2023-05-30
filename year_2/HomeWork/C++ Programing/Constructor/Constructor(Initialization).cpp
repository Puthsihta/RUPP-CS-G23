#include<iostream>
#include<conio.h>
using namespace std;
class sample{

   int data1,data2;
   public:
   sample() {data1=20;data2=30;}

   sample(int one,int two)
   { data1=one; data2=two; }

   sample(sample &othor)
    { data1=othor.data1;
      data2=othor.data2;
    }
    void output()
    { cout<<"data1:"<<data1<<endl;
      cout<<"data2:"<<data2<<endl;
    }
};
   int  main()
   {
      //clrscr();
      sample b1;
       sample b2(22,33);
       sample b3(b2);
       sample b4=b3;
       cout<<"Initialization of b1:\n";
       b1.output();
       cout<<"\nInitialization of b2:\n";
       b2.output();
       cout<<"\nInitialization of b3:\n";
       b3.output();
       cout<<"\nInitialization of b4:\n";
       b4.output();
       cout<<"Initialization of Noname object:\n";
       sample(55,555).output();
       
       
      getch();
      return 0;
   }
