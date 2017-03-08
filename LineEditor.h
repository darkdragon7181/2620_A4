/*****************************
 Assignment 4
 By: Navraj (Raj) Saini
 Prof: Howard Cheng
 Class: 2620, Spring 2017
 Description: a class that stores a line of text a well as a
              cursor position (iterator). The cursor is allowed to point
              to any character in the line of text, as well as one
              character after the line.
*****************************/
#ifndef LINEEDITOR_H
#define LINEEDITOR_H

#include <list>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
class LineEditor{
  public:
   LineEditor();
   ~LineEditor();
   void left();
   void right();
   void insert(const string& s);
   void erase();
   void change(char c);
   void apply (char (*f)(char c));
   friend ostream& operator <<(ostream &os, const LineEditor& le);

  private:
   list <char> text;
   list <char>::iterator cursor=text.begin();
};
ostream& operator<<(ostream &os, const LineEditor& le);

#endif
