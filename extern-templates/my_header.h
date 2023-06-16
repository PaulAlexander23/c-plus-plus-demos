#pragma once

#include <iostream>

template <class T> class MyClass {
public:
  MyClass(const T &value) : MyValue(value) {}

  void print();

  T MyValue;
};
