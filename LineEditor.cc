#include <iostream>
#include "LineEditor.h"
#include <list>
#include <algorithm>

//default constructor
LineEditor::LineEditor()
{
}

//destructor
LineEditor::~LineEditor()
{
}

/*
  left function
  moves the cursor to the left by one character. If the cursor is
  already at the beginning, this function does nothing.
 */
void LineEditor::left()
{
   if(cursor == text.begin())
   {
      return;
   }
   else
      cursor--;
}

/*
  right function
  moves the cursor to the right by one character. If the cursor
  is already pointing to one character past the end, this
  function does nothing
 */
void LineEditor::right()
{
   if(cursor == text.end())
      return;
   else
      cursor++;
}
/*
  insert function
  inserts the string s into the current position.
  The cursor should be positioned after the inserted string.
  Note: the iterator remains unchanged and valid after
  list<char>::insert(), so it does not need updating
*/
void LineEditor::insert(const string& s)
{
   list <char> temp; // temp list
   temp = text;// assign it to the text list
   
   //text.resize(temp.size() + s.length());
   text = list <char> (temp.size() + s.length());
   
   for (int j = 0; j < distance(text.begin(), cursor); j++)// add the chars up to the cursor
   {
      //copy up to the location of the iterator
      //format:
      //       text.assign(location of where to place the char, the char to assign)
      text.assign(j, *temp.begin()+j);
   }
   
   for (int i = 0; i < s.length(); i++)// add in the rest of the chars from the string
   {
      //text[i+cursor] = s[i];
      //text.assign(/*where to place the char*/, /*the char to place*/)
      text.assign(distance(text.begin(), cursor) + i, s[i]);
   }
   
   for (int k = temp.size(); k < text.size(); k++)//copy the rest of the old list
   {
      //text[temp[cursor]+s.lenght()+k] = temp[cursor+k];
      
      text.assign(distance(temp.begin(), cursor) + s.length() + k/*location of where to place the char*/, *temp.begin() + (k + distance(temp.begin(), cursor))/*char to place*/);
      // = *temp.begin() + (k + distance(temp.begin(), cursor));
   }
}

/*
  erase function
  erases the character at the current position. The cursor
  should be positioned at the character immediately after the one erased.
  If the cursor is past the end of the line, this function does nothing.
*/
void LineEditor::erase()
{
   if(cursor == text.end())
      return;
   else
   {
      text.erase(cursor);
   }
}

/*
  change function
  changes the character at the current position to c. The cursor should
  be positioned at the changed character. If the cursor points to one
  past the end of the line, then this function should behave exactly the
  same way as insert.
*/
void LineEditor::change(char c)
{
   if(cursor == text.end())
   {
      return;
   }
   else
   {
      text.assign(*cursor,c);
   }
}

/*
  apple function
  applies the function f to every character
  c in the line, and replaces the character by f(c).
*/
void LineEditor::apply (char (*f)(char c))
{
   transform(text.begin(), text.end(), text.begin(), f);
}

/*
  The line of text is first printed, ended with the symbol
  $ to mark the end of line. The next line contains a single
  character ^ to indicate the position of the cursor.
*/
ostream& operator <<(ostream &os, const LineEditor& le)
{
   for (list<char> outit = le.text.begin(); outit != le.text.end(); outit++)
   {
      os << *outit;
   }
   os << "$^";
   return os;
}
