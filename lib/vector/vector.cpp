#include "vector.h"

Vector::Vector() : x(0), y(0) {};
Vector::Vector(int x_, int y_) : x(x_), y(y_) {};

int Vector::get_x()
{
  return x;
}

void Vector::set_x(int x_)
{
  if (x_ == x)
    return;

  x = x_;
}

int Vector::get_y()
{
  return y;
}

void Vector::set_y(int y_)
{
  if (y_ == y)
    return;

  y = y_;
}
