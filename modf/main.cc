#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double a = 10;
  double b = 3;
  double c = fmod(a, b);

  // cout << c << " + " << b << end;
  cout << to_string(a) << endl;
  cout << to_string(b) << endl;
  cout << to_string(c) << endl;

  return 0;
}
