#include <iostream>

class ABase {
public:
  ~ABase(){};
  virtual void print() = 0;

  void print_double() {
    print();
    print();
  }
};

class A : public ABase {
public:
  ~A(){};
  virtual void print() { std::cout << "A" << std::endl; }
};

class B {
private:
  A *localA;

public:
  B() { localA = new A; }
  ~B() { delete localA; }
  void print() {
    ABase *abase = dynamic_cast<ABase *>(localA);
    abase->print();
  }
};

class C {
private:
  ABase *localABase;

public:
  C() { localABase = dynamic_cast<ABase *>(new A); }
  ~C() { delete dynamic_cast<A *>(localABase); }
  void print() { localABase->print(); }
};

int main() {

  A a;
  a.print();

  a.print_double();
  std::cout << std::endl;

  B b;
  b.print();

  C c;
  c.print();

  return 0;
}
