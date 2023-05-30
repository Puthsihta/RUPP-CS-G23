#include <iostream>
#include <conio.h>
using namespace std;
void Xhandler(int test){
	  try{
	     if(test) 
		  throw test;
	  } catch(int i) { 
	     cout << "Caught One! Ex. #: " << i << '\n';
	  }
     }
int  main(){
	
	cout << "start\n";
	   Xhandler(1); 
	   Xhandler(2); 
	   Xhandler(0); 
	   Xhandler(3); 
	   cout << "end";

	
	getch();
}