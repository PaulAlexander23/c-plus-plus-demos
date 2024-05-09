#ifndef HEADER
#define HEADER

#include <iostream>

class A {
private:
  int _data;

public:
  A();
  void print();
};

A::A() : _data(5) {}

void A::print() { std::cout << _data << std::endl; }

#endif
