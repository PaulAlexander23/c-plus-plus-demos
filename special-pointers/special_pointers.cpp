#include <iostream>
#include <memory>

int main() {
  std::cout << "special pointers" << std::endl;

  std::unique_ptr<double> db_pt(new double);

  *db_pt = 3.0;

  std::cout << *db_pt << std::endl;

  std::unique_ptr<double> a_pt;

  a_pt = std::make_unique<double>(3.0);

  std::cout << *a_pt << std::endl;

  return 0;
}
