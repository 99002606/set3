#ifndef POLYGON_H_INCLUDED
#define POLYGON_H_INCLUDED

#include"shape.h"

class Polygon:public IShape {
  int m_sides;
  public:
      Polygon();
  Polygon(int n);   //no.of sides
};


#endif // POLYGON_H_INCLUDED
