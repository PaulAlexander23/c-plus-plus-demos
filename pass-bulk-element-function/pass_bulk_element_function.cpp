#include <iostream>

class Base {
public:
  Base() {}

  int lookup(const int &i) { return i; }
};

// class Face {
//
//   int (Base::*lookup_var)(const int &);
//
// public:
//   Face(Base &base) { lookup_var = &base.lookup; }
//
//   int lookup(const int &i) { return (Base::*lookup_var)(i); }
// };

int main() {
  std::cout << "Pass bulk element function." << std::endl;

  Base base_obj;

  std::cout << base_obj.lookup(3) << std::endl;

  int (Base::*local_lookup)(const int &i) = &Base::lookup;

  std::cout << (base_obj.*local_lookup)(3) << std::endl;

  return 0;
}
