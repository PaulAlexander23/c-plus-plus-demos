#include <iostream>

class B {
public:
  B(int value) { std::cout << "B: " << value << std::endl; }
};
class A {
  B b_obj;

public:
  A() : b_obj(4) {}
};

int main() {
  B b(3);
  A a;
  return 0;
}
