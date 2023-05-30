#include<iostream>
#include <conio.h>
using namespace std;
class fri{
	private:
		float x,y;
	public:
		void input(){ cout<<"Input x and y:";
			      cin>>x>>y;
			    }
		friend float sum(fri &f){ return f.x+f.y;}
		friend void output(fri &f)
		{
cout<<"x="<<f.x<<'\t'<<"y="<<f.y<<"\n sum = "<<sum(f)<<endl;
		}
};            
int  main()
{
	fri b;
	b.input();
	output(b);
	
	getch();
	return 0;
}
