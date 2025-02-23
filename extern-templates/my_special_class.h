#pragma once

#include "my_class.h"
#include <iostream>

template <class T> class MySpecialClass : public MyClass<T> {
public:
  MySpecialClass(const T &value) : MyClass<T>(value) {}

  void print() {
    std::cout << "MySpecialClass: ";
    MyClass<T>::print();
  }
};
