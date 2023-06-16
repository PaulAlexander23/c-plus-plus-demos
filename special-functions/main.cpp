#include "boost/math/special_functions.hpp"
#include <iostream>

int main() {
  std::cout << "Hello world!" << std::endl;
  double x = 1;
  double f = boost::math::expint(x);
  std::cout << "expint(" << x << ") = " << f << std::endl;
}
