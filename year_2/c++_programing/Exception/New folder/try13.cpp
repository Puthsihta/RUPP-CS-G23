6.4.3.Catch double exception 
 
 
#include <iostream>
using namespace std;
int main(void)
{
   try {
      cout << "Inside try block." << endl;
      throw 100;
      cout << "This will not execute.";
   }catch(double d) {
      cout << "Caught a double exception -- value is: ";
      cout << d << endl;
   }
} 
 
