#include <iostream>
#include "LineEditor.h"
#include <ostream>

using namespace std;

int main()
{
   LineEditor line;
   char command;
   string s;
   char c;
   cout << "Command options are: L to move cursor left, R to move cursor right, " << endl
	<< "I to insert a string you will need to provide a string after a space to insert, "
	<< endl
	<< "D to erase where the cursor is, C to change the character at the cursor location, "
	<< endl << "U to change all to upper case, l to make all lower case" << endl
	<< "P to print the sentences, and Q to quit." << endl << "Input Command: ";
   cin >> command;
   
   while (command != 'Q')
   {
      switch(command)
      {
	 case 'L' :
	 {
	    cout << "moving cursor to the left" << endl;
	    line.left();
	 
	    break;
	 }
	 case 'R' :
	 case 'r' :
	    {
	       cout << "moving cursor to the right" << endl;
	       line.right();
	       break;
	    }
	 case 'I' :
	 case 'i' :
	    {
	       cout << "in insert case, input the string to insert" << endl;
	       cin.ignore();
	       getline(cin, s);
	       line.insert(s);
	       break;
	    }
	 case 'D' :
	 case 'd' :
	    {
	       cout << "in erase case" << endl;
	       line.erase();
	       break;
	    }
	 case 'C' :
	 case 'c' :
	    {
	       cout << "in Change" << endl;
	       cin >> c;
	       line.change(c);
	       break;
	    }
	 case 'U' :
	 case 'u' :
	    {
	       //upper case
	       //line.apply();
	       break;
	    }
	 case 'l' :
	 {
	    //lower case
	    //line.apply();
	    break;
	 }
	 case 'P' :
	 case 'p' :
	    {
	       cout << "in print " << line;
	       break;
	    }
	 case 'Q' :
	 case 'q' :
	    {
	       cout << "QUITING" << endl;
	       return 0;
	       break;
	    }
	 default:
	 {
	    cout << "invalid entry please try again.";
	    break;
	 }
      }
      cout << endl << "next command: ";
      cin >> command;
   }
   return 0;
}
