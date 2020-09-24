#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED


#include "shape.h"

class Circle : public IShape {
  double m_radius;

public:
 // const static double PI = 22.0/7.0;
  Circle();
  Circle(double r);
  double area();
  double circumference();
};

#endif // CIRCLE_H_INCLUDED
