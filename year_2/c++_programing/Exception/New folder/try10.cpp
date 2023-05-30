//try catch block without exception being thrown 
 
 
#include <iostream>
using namespace std;

int main()
{
  cout << "Start\n";

  try { 
    cout << "Inside try block\n";
    cout << "Still inside try block\n";
  }
  catch (int i) {
    cout << "Caught an exception -- value is: ";
    cout << i << "\n";
  }

  cout << "End";

  return 0;
} 
 

 
 
