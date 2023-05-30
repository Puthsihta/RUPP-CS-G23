//6.4.1.Different types of exceptions can be caught 
 
 
#include <iostream>
using namespace std;

void f(int test)
{
  try{
    if(test) 
       throw test;
    else 
       throw "Value is zero";
  }
  catch(int i) {
    cout << "Caught Exception #: " << i << '\n';
  }
  catch(const char *str) {
    cout << "Caught a string: ";
    cout << str << '\n';
  }
}

int main()
{
  cout << "Start\n";

  f(1);
  f(2);
  f(0);
  f(3);

  cout << "End";

  return 0;
} 
 
 
