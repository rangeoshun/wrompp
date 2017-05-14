#include <iostream>
#include "lib/entity/entity.h"

int main()
{
  Game g;
  Entity e (g);
  std::string name = "Foo";
  e.name.set(name);

  std::cout << e.name.get() << std::endl;
  return 0;
}
