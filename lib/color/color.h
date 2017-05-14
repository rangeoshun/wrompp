#ifndef COLOR_H
#define COLOR_H

#include <string>

class Color
{
public:
  Color() : r(0), g(0), b(0) {};
  Color(int r_, int g_, int b_) : r(r_), g(g_), b(b_) {};

  std::string toHex();

private:
  int r;
  int g;
  int b;
};

#endif // COLOR_H