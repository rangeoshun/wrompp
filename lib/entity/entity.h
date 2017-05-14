#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "../game/game.h"
#include "../vector/vector.h"
#include "../updatable/updatable.h"
#include "../color/color.h"

class Fx {};

class Entity
{
public:
    Entity(Game);

    Updatable<std::string> type;
    Updatable<bool> alive;
    Updatable<Vector> coords;
    Updatable<std::string> name;
    Updatable<Color> color;

    Fx die_fx;

private:
    Game game;
    bool updated;
};

#endif // UPDATEABLE_H