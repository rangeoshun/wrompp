#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "../game/game.h"
#include "../vector/vector.h"
#include "../updatable/updatable.h"

class Fx {};

class Entity
{
public:
  Entity(Game);

  Updatable<std::string> type;
  Updatable<Vector> coords;
  Updatable<bool> alive;
  Updatable<std::string> name;

  Fx die_fx;

private:
  Game game;
  bool updated;
};

#endif // UPDATEABLE_H