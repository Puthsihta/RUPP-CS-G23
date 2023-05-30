//6.4.4.Catching class type exceptions 
 
 
#include <iostream>
#include <cstring>
using namespace std;

class MyException {
public:
  char message[80];
  int what;

  MyException() { *message = 0; what = 0; }

  MyException(char *s, int e) {
    strcpy(message, s);
    what = e;
  }
};

int main()
{
  int i;

  try {
    cout << "Enter a positive number: ";
    throw MyException("Not Positive", -1);
  }
  catch (MyException e) { // catch an error
    cout << e.message << ": ";
    cout << e.what << "\n";
  }

  return 0;
} 
 
//Enter a positive number: Not Positive: -1
 
