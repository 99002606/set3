#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include "polygon.h"

class Rectangle : public Polygon {
  int  m_length;
  int  m_breadth;

public:
    Rectangle();
  Rectangle(int l,int b);
  double area();
  double circumference();
};



#endif // RECTANGLE_H_INCLUDED
