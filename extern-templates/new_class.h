#pragma once

#include <iostream>

template <class T> class NewClass {
public:
  NewClass() { std::cout << "Hello world!" << std::endl; }
};

extern template class NewClass<int>;
