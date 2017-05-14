#ifndef UPDATEBLE_H
#define UPDATEBLE_H

#include <iostream>
#include "../vector/vector.h"
#include "../color/color.h"

template <class T>
class Updatable
{
public:
    Updatable();
    Updatable(T);

    T get();
    void set(T);
    bool is_updated();

private:
    T data;
    bool updated;
};

template class Updatable<std::string>;
template class Updatable<Vector>;
template class Updatable<Color>;
template class Updatable<bool>;

#endif // UPDATABLE_H