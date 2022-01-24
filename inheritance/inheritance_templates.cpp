#include <iostream>

using namespace std;

template <unsigned N> class Base {
public:
  Base(){};

  virtual void print() { cout << "Base print: " << N << endl; }

  void call_print() { print(); }
};

template <unsigned N> class Derived : public Base<N> {
public:
  Derived(){};

  void print() { cout << "Derived print: " << N << endl; }
};

int main() {
  Base<1> base_object;
  Derived<2> derived_object;

  base_object.call_print();
  derived_object.call_print();

  return 0;
};
