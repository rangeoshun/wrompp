#include "vector.h"

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
