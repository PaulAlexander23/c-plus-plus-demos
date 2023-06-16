#include "math.h"
#include <iostream>

using namespace std;

int main() {
  double x, y, theta1, theta2;
  double pi = 4 * atan(1);
  for (unsigned i = 0; i < 101; i++) {
    x = cos(2.0 * pi * double(i) / 100.0);
    y = sin(2.0 * pi * double(i) / 100.0);
    theta1 = atan2(y, x);
    theta2 = atan(y / x);
    cout << "x: " << x << ", ";
    cout << "y: " << y << ", ";
    cout << "theta: " << 2.0 * pi * double(i) / 100.0 << ", ";
    cout << "theta1: " << theta1 << ", ";
    cout << "theta2: " << theta2 << ", ";
    cout << endl;
  }

  return 0;
}
