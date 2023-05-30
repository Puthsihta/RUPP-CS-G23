// try block can be localized to a function  
 #include <iostream> 
using namespace std;  
void f(int test) 
{ 
  try{ 
    if(test) throw test; 
  } 
  catch(int i) { 
    cout << "Caught One!  Ex. #: " << i << '\n'; 
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
 
 
