#include<iostream.h>
template<class T>
class Sample
{ protected:
			  T num;
  public:
		  void input()
		  { cout<<"Input Number =";cin>>num;
		  }
		  void output()
		  { cout<<num<<"\t";
		  }
		  int getnum()
		  { return num;
		  }
};
template<class T>
void sort(T obj[],int n)
{	int i,j;
	T tmp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if(obj[i].getnum()>obj[j].getnum())
			{ tmp=obj[i];
			  obj[i]=obj[j];
			  obj[j]=tmp;
			}
}
void main()
{ Sample<int> s[10];
  int i,n;
  cout<<"Input N =";cin>>n;
  for(i=0;i<n;i++)
  { s[i].input();
  }
  sort(s,n);
  for(i=0;i<n;i++)
  { s[i].output();
	 cout<<endl;
  }
  Sample<float> s1[10];
  cout<<"Input N =";cin>>n;
  for(i=0;i<n;i++)
  { s1[i].input();
  }
  sort(s1,n);
  for(i=0;i<n;i++)
  { s1[i].output();
	 cout<<endl;
  }
   Sample<char> s2[10];
  cout<<"Input N =";cin>>n;
  for(i=0;i<n;i++)
  { s2[i].input();
  }
  sort(s2,n);
  for(i=0;i<n;i++)
  { s2[i].output();
	 cout<<endl;
  }
}
