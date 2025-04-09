#include <amdlibm.h>
#include <iostream>
#include <math.h>

int main() {
  std::cout << "Hello world!" << std::endl;

  const unsigned length = 10000;
  const double dx = 1.0 / 10000.0;
  double total = 0.0;
  for (unsigned n = 0; n < length; n++) {
    double x = n * dx;
    double f = amd_exp(x);
    total += f * dx;
  }
  std::cout.precision(15);
  std::cout << total << std::endl;

  return 0;
}
