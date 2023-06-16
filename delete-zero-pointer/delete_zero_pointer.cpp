#include <iostream>

int main() {
  std::cout << "delete_zero_pointer.cpp" << std::endl;

  int *my_pointer = 0;

  my_pointer = new int(5);

  std::cout << "*my_pointer: " << *my_pointer << std::endl;

  delete my_pointer;

  return 0;
}
