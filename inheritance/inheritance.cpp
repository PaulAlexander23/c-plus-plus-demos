#include <iostream>

using namespace std;

class Base {
public:
  Base(){};

  virtual void print() { cout << "Base print" << endl; }

  void call_print() { print(); }
};

class Derived : public Base {
public:
  Derived(){};

  void print() { cout << "Derived print" << endl; }
};

int main() {
  Base base_object;
  Derived derived_object;

  base_object.call_print();
  derived_object.call_print();

  return 0;
};
