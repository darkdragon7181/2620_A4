#include <iostream>
#include "LineEditor.h"

using namespace std;

int main()
{
   LineEditor line;
   string command;
   string s;
   char c;
   
   cin >> command;

   while(command != 'Q' || 'q')
   {
      switch(command)
      {
	 case 'L' :
	 {
	    line.left();
	    break;
	 }
	 case 'R' :
	 case 'r' :
	    {
	       line.right();
	       break;
	    }
	 case 'I' :
	 case 'i' :
	    {
	       cin >> s;
	       line.insert(s);
	       break;
	    }
	 case 'D' :
	 case 'd' :
	    {
	       line.erase();
	       break;
	    }
	 case 'C' :
	 case 'c' :
	    {
	       cin >> c;
	       line.change(c);
	       break;
	    }
	 case 'U' :
	 case 'u' :
	    {
	       //upper case
	       line.apply();
	       break;
	    }
	 case 'l' :
	 {
	    //lower case
	    line.apply();
	    break;
	 }
	 case 'P' :
	 case 'p' :
	    {
	       ostream os;
	       os << line;
	       break;
	    }
	 case 'Q' :
	 case 'q' :
	    {
	       return 0;
	       break;
	    }
      }
      cin >> command;
   }
   return 0;
}
