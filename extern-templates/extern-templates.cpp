#include "my_header.h"
#include <iostream>

using namespace std;

extern template class MyClass<double>;

int main() {
  cout << "extern-templates." << endl;

  MyClass<double> double_obj(3.0);
  double_obj.print();

  MyClass<int> int_obj(4);
  int_obj.print();

  return 0;
}
