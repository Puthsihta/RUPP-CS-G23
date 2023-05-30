//Use catch(...) as a default 
 
 
#include <iostream>
using namespace std;

void f(int val)
{
  try{
    if(val==0) 
       throw val;
    if(val==1) 
       throw 'a';
    if(val==2) 
       throw 123.23;
  }
  catch(int i) {                      // catch an int exception
    cout << "Caught an integer\n";
  }
  catch(...) {                        // catch all other exceptions
    cout << "Caught One!\n";
  }
}

int main()
{
  f(0);
  f(1);
  f(2);

  return 0;
} 
 
 
