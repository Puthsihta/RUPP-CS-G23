//Multiple catch blocks 
 
 
#include <iostream>
#include<string>
using namespace std;

int main () {
  try
  {
    string mystring="Rupp";
    string st;
   // mystring = new char [10];
    if (mystring.empty()) 
       throw mystring="Allocation failure";
    
    for (int n=0; n<=100; n++)
    {
      if (n>9) 
         throw n;
      mystring[n]='a';
      
    }
  }
  catch (int i)
  {
    cout << "index " << i << " is out of range" << endl;
  }
  catch (string str)
  {
    cout << "Exception: " << str << endl;
  }
  return 0;
} 
 
 
