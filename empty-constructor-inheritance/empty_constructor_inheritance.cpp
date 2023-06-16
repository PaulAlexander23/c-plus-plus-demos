#include <iostream>

class A {
public:
  A() : value(3) {}

protected:
  double value;
};

class B : public A {
public:
  void print_value() { std::cout << this->value << std::endl; }
};

int main() {
  B b;
  b.print_value();
  return 0;
}
