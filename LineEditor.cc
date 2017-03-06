#include <iostream>
#include "LineEditor.h"

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
}

/*
  right function
  moves the cursor to the right by one character. If the cursor
  is already pointing to one character past the end, this
  function does nothing
 */
void LineEditor::right()
{
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
}

/*
  apple function
  applies the function f to every character
  c in the line, and replaces the character by f(c).
 */
void LineEditor::apply (char (*f)(char c))
{
}
ostream& operator <<(ostream &os, const LineEditor& le)
{
}

