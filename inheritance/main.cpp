#include <iostream>

class Base {
public:
  virtual void print() { std::cout << "base" << std::endl; }

  void call_print() {
    print();
    this->print();
  }
};

class Derived : public Base {
public:
  virtual void print() { std::cout << "derived" << std::endl; }
};

class ModifiedBase : public Base {
public:
  virtual void print() override { std::cout << "modified base" << std::endl; }
};

class Final : public virtual Derived, public virtual ModifiedBase {
public:
  void print() { ModifiedBase::print(); }
};

int main() {

  std::cout << "inheritance" << std::endl;
  Base base;
  base.call_print();

  Derived derived;
  derived.call_print();

  Final finalObj;
  finalObj.print();
}
