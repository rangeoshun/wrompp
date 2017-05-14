#ifndef VECTOR_H
#define VECTOR_H

class Vector
{
public:
  Vector() : x(0), y(0) {};
  Vector(int x_, int y_) : x(x_), y(y_) {};

  int get_x();
  void set_x(int x_);

  int get_y();
  void set_y(int y_);

private:
    int x;
    int y;
};

#endif // VECTOR_H