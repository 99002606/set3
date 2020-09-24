#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED



#include "polygon.h"

class Triangle : public Polygon {
  int  m_a;
  int  m_b;
  int  m_c;

public:
  Triangle(int x,int y,int z);
  double area() ;
  double circumference();
};

#endif // TRIANGLE_H_INCLUDED
