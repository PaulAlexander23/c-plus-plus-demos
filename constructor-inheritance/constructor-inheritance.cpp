#include <iostream>

using namespace std;

class A {
public:
  A() { this->build(); }
  virtual void build() { cout << "build A" << endl; }
};

class B : public A {
public:
  B() : A() { build(); }

  void build() { cout << "build B" << endl; }
};

class Base {
public:
  Base() { print(); }

  void print() { cout << "Base" << endl; }
};

class Derived : public Base {
public:
  Derived() : Base(){}
  void print() { cout << "Derived" << endl; }
};

int main() {
  cout << "Constructor inheritance." << endl;
  A a;
  B b;

  Derived d;
  d.print();

  return 0;
}
