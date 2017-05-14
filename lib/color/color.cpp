#include <iomanip>
#include <sstream>
#include "color.h"

Color::Color()
{
  Color(0, 0, 0);
}

Color::Color(unsigned int r_, unsigned int g_, unsigned int b_)
{
  set_r(r_);
  set_g(g_);
  set_b(b_);
}

unsigned int Color::get_r()
{
  return (unsigned int) r;
}

void Color::set_r(unsigned int r_)
{
  r = (unsigned char) r_;
}

unsigned int Color::get_g()
{
  return (unsigned int) g;
}

void Color::set_g(unsigned int g_)
{
  g = (unsigned char) g_;
}

unsigned int Color::get_b()
{
  return (unsigned int) b;
}

void Color::set_b(unsigned int b_)
{
  b = (unsigned char) b_;
}

std::string Color::toHex()
{
  std::stringstream stream;
  stream
    << std::hex << (int) r
    << std::hex << (int) g
    << std::hex << (int) b;

  return stream.str();
}