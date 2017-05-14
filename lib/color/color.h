#ifndef COLOR_H
#define COLOR_H

#include <string>

class Color
{
public:
    Color();
    Color(int, int, int);

  std::string toHex();

private:
  int r;
  int g;
  int b;
};

#endif // COLOR_H