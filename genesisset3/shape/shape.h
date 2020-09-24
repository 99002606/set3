#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED


class IShape {
  public:
  virtual double area()=0;
  virtual double circumference()=0;
};

#endif // SHAPE_H_INCLUDED
