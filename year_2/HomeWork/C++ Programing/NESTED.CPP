#include<iostream>
#include<conio.h>
using namespace std;
class circle {
	public:
		class  point {
			  private :
				 int x,y;
			  public:
				 void input();
				 void output();
				 void set_data(int xx,int yy)
					{ x=xx; y =yy; }
			};
	private:
		float radius;
		point p;
		public:
			void input();
			void output();
			void set_data(float  r, point pxy)
			{ radius=r; p=pxy; }
			float area();
   };

	void circle::point::input()
	{
		cout<<"x:";cin>>x;
		cout<<"y:";cin>>y;
	}
	void circle::point::output()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	}
	void circle::input()
	{
		p.input();
		cout<<"Radius:";cin>>radius;
	}
	void circle::output()
	{
		p.output();
		cout<<"Radius:"<<radius<<endl;
		cout<<"Area:"<<area()<<endl;
	}
	float circle::area()
	{
		return radius*radius*3.14;
	}

int main()
  {
	  circle c1,c2;
	  circle::point p;
	  p.set_data(11,22);
	  cout<<"point P:";
	  p.output();
	  c1.set_data(55,p);
	  cout<<"circle c1:"<<endl;
	  c1.output();

	  c2.input();
	  cout<<"circle c2:"<<endl;
	  c2.output();
	  
	  getch();
	  return 0;

  }