#include <iostream>
#include "LineEditor.h"

//default constructor
LineEditor::LineEditor()
{
   list <char> t;
   text = t;
   cursor = t.begin()++;
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
      break;
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
      break;
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
}

/*
  erase function
  erases the character at the current position. The cursor
  should be positioned at the character immediately after the one erased.
  If the cursor is past the end of the line, this function does nothing.
*/
void LineEditor::erase()
{
   if(cursor == text.end()+1)
      break;
   else
   {
      erase(cursor);
      cursor++;
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
   if(cursor == text.end()+1)
      this.insert();
   else
   {
      text[cursor] = c;
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
}
