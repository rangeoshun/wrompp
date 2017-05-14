#include <iostream>
#include "lib/entity/entity.h"

int main()
{
  Game g;
  Entity e (g);

  std::string name = "Foo";
  Color white (255, 255, 255);
  Vector coords (0, 1);

  e.name.set(name);
  e.color.set(white);
  e.coords.set(coords);

  std::cout
    << "Name: "
    << e.name.get() << std::endl
    << "Color: "
    << "#" << e.color.get().toHex() << std::endl
    << "Coords: "
    << "(" << e.coords.get().get_x() << "," << e.coords.get().get_y() << ")" << std::endl;

  return 0;
}
