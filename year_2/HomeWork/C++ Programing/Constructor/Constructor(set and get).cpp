#include<iostream>
#include <conio.h>
using namespace std;
class sample{
	private:
		int x;
		int y;
	public:
	int getx(){return x;}
	int gety(){return y;}

	void setx(){x=111;}
	void sety(){y=222;}

	sample(int x,int y)
	{
	  this->x=x;
	  this->y=y;
	}

	void output()
	{
	  cout<<"x="<<getx()<<"\ty="<<gety()<<endl;
	}
};

  int  main()
   {
      sample s(11,22);
      s.output();
      s.setx();
      s.sety();
      s.output();
      
      getch();
      return 0;
  }



