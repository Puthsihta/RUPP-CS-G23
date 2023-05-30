
// Ctrl +shift +Z

#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
  ofstream out;
  char ch;
  out.open("myfile.txt");
  while((ch=cin.get()) !='$')
    out.put(ch);
    out.close();

  ifstream in;
  in.open("myfile.txt");
  while(!in.eof())
   {
     ch=in.get();
     cout<<ch;
   }
   in.close();
   getch();
   return 0;
}




