#pragma once

#include <iostream>

template <class T> class MyClass {
public:
  MyClass(const T &value) : MyValue(value) {}

  void print() { std::cout << this->MyValue << std::endl; }

  T MyValue;
};
