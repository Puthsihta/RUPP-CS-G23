//6.4.5.Catching Class Types 
 
 
#include <iostream>
#include <cstring>
using namespace std;
   
class MyException {
public:
  char str_what[80];
  int what;
   
  MyException() { *str_what = 0; what = 0; }
   
  MyException(char *s, int e) {
    strcpy(str_what, s);
    what = e;
  }
};
   
int main(){
  int i;
   
  try {
    cout << "Enter a positive number: ";
    cin >> i;
    if(i<0)
      throw MyException("Not Positive", i);
  }
  catch (MyException e) { // catch an error
    cout << e.str_what << ": ";
    cout << e.what << "\n";
  }
   
  return 0;
} 
 
 
