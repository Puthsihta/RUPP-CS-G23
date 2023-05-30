//Catch 'char *' exception 
 
 
#include <iostream>
using namespace std;

int main () {
	string st;
  try
  {
      throw st="Out of range";
  }
  catch (string str)
  {
    cout << "Exception: " << str <<endl;
  }
  return 0;
} 
 

