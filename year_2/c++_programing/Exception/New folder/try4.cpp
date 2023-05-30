//Use multiple catch statements 
 
 
#include <iostream> 
using namespace std; 
 
void f(int test) 
{ 
  string st;
  try{ 
    if(test) 
       throw test;            // throw int 
    else 
       throw st="Value is zero"; // throw char * 
  } 
  catch(int i) { 
    cout << "Caught One!  Ex. #: " << i << '\n'; 
  } 
  catch(string str) { 
    cout << "Caught a string: "; 
    cout << str << '\n'; 
  } 
} 
 
int main() 
{ 
  cout << "start\n"; 
 
  f(1); 
  f(2); 
  f(0); 
  f(3);  
  cout << "end"; 
  return 0; 
} 
 
 
