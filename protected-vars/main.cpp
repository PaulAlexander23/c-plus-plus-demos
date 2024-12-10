#include <iostream>

class ABase {
  friend class B;
protected:
  int a;

public:
  ABase() : a(3) {}
};

class A : public ABase {
public:
  void print() { std::cout << this->a << std::endl; };
};

class B {
public:
  void print() {
    A Aobj;
    std::cout << Aobj.a << std::endl;
  };
};

int main() {

  B b;

  b.print();

  return 0;
}
