#ifndef UPDATEBLE_H
#define UPDATEBLE_H

#include <iostream>
#include "../vector/vector.h"

template <class T>
class Updatable
{
public:
  Updatable();

  T get();
  void set(T);
  bool is_updated();

private:
  T data;
  bool updated;
};

template class Updatable<std::string>;
template class Updatable<bool>;
template class Updatable<Vector>;

#endif // UPDATABLE_H