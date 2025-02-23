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

class Simple {
private:
  double a;

public:
  Simple() : a(0.0) {
    std::cout << "Simple constructor" << std::endl;
    set_vars(1.0);
    print();
  }

  virtual void set_vars(double passed_a) {
    std::cout << "Simple set" << std::endl;
    a = passed_a;
  }

  virtual void print() {
    std::cout << "Simple print" << std::endl;
    std::cout << a << std::endl;
  }
};

class Complex : public Simple {
private:
  double b;

public:
  Complex() : Simple() {
    set_vars(2.0);
    print();
  }

  virtual void set_vars(double passed_a) override { b = 2.0 * passed_a; }

  virtual void print() override {
    Simple::print();
    std::cout << "Complex print" << std::endl;
    std::cout << b << std::endl;
  }
};

int main() {

  std::cout << "inheritance" << std::endl;
  Base base;
  base.call_print();

  Derived derived;
  derived.call_print();

  Final finalObj;
  finalObj.print();

  Simple obj1;
  Complex obj2;
}
