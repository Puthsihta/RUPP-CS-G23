#include <iostream>
#include <conio.h>
using namespace std;
int  main(){
	
	  cout << "start\n";
	  try { // start a try block
		cout <<"Inside try block\n";
		throw 99;
		cout << "This will not execute";
	  }
	  catch (int i) { 
		cout << "Caught an exception -- value is: ";
		cout << i << "\n"; 
	  }
	  cout << "end";
	  getch();
     }
