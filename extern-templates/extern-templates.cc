#include "my_class.h"
#include "my_special_class.h"
#include "new_class.h"
#include <iostream>

using namespace std;

extern template class MyClass<double>;
extern template class MySpecialClass<double>;

int main() {
  cout << "extern-templates." << endl;

  MyClass<double> double_obj(3.0);
  double_obj.print();

  MySpecialClass<double> double_obj2(3.0);
  double_obj2.print();

  MyClass<int> int_obj(4);
  int_obj.print();

  MySpecialClass<int> int_obj2(4);
  int_obj2.print();

  NewClass<int> new_obj;
  NewClass<double> new_obj2;

  return 0;
}
