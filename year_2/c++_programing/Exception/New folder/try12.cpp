//6.4.2.how to restrict the types of exceptions that can be thrown from a function. 
 
 
#include <iostream>
using namespace std;
   
void Xhandler(int test) throw(int, char, double){
  if(test==0) throw test; 
  if(test==1) throw 'a'; 
  if(test==2) throw 123.23; 
}
   
int main()
{
  cout << "start\n";
   
  try{
    Xhandler(0); 
  }
  catch(int i) {
    cout << "Caught an integer\n";
  }
  catch(char c) {
    cout << "Caught char\n";
  }
  catch(double d) {
    cout << "Caught double\n";
  }
   
  cout << "end";
   
  return 0;
} 
 
