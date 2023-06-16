#include "my_header.h"

template <class T> void MyClass<T>::print() {
  std::cout << this->MyValue << std::endl;
}

template class MyClass<double>;
//template class MyClass<int>;
