#include <iomanip>
#include <sstream>
#include "color.h"

Color::Color() : r(0), g(0), b(0) {}

Color::Color(int r_, int g_, int b_) : r(r_), g(g_), b(b_) {}

std::string Color::toHex()
{
  std::stringstream stream;
  stream << std::hex << r + std::hex << g + std::hex << b;

  return stream.str();
}