#include <iomanip>
#include <sstream>
#include "color.h"

std::string Color::toHex()
{
  std::stringstream stream;
  stream << std::hex << r + std::hex << g + std::hex << b;

  return stream.str();
}