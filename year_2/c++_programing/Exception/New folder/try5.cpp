//Catch all exceptions 
 
 
#include <iostream> 
using namespace std; 
 
void f(int test) 
{ 
  try{ 
    if(test==0) throw test; // throw int 
    if(test==1) throw 'a'; // throw char 
    if(test==2) throw 123.23; // throw double 
  } 
  catch(...) { // catch all exceptions 
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
 
 
