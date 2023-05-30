#include<iostream.h>

class payment {
	protected:
		int hour;
		int wage;
	public:
	payment(int h=0,float w=2.5):hour(h),wage(w){}
	payment(payment &p):hour(p.hour),wage(p.wage) {}

		operator int(){return hour;}

		operator float(){return wage; }

		operator double(){return hour *wage; }
};

void main()
{
	payment p(24,5);
	cout<<"Hour ="<<(int)p<<endl;
	cout<<"Wage="<<(float)p<<endl;
	cout<<"Paid="<<(double)p<<endl;
}