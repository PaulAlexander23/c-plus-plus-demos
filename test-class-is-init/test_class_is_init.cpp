#include <iostream>

class A {
public:
  A() : internal_value(1.0) {}

  void print() { std::cout << internal_value << std::endl; }

private:
  double internal_value;
};

void print_class(A *&a_pt) {
  if (a_pt) {
    a_pt->print();
  }
}

int main() {

  std::cout << "test_case_is_init.cpp" << std::endl;

  A *a_pt = 0;

  print_class(a_pt);

  a_pt = new A;

  print_class(a_pt);

  return 0;
}
