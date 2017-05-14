#include "updatable.h"

template <class T>
Updatable<T>::Updatable() {
  updated = false;
}

template <class T>
Updatable<T>::Updatable(T data_) {
  updated = false;
  data = data_;
}

template <class T>
T Updatable<T>::get()
{
  updated = false;
  return data;
}

template <class T>
void Updatable<T>::set(T data_)
{
  updated = true;
  data = data_;
}

template <class T>
bool Updatable<T>::is_updated()
{
  return updated;
}