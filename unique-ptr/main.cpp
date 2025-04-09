#include <iostream>
#include <memory>

using namespace std;

void point_x_to_y(double *&x, double y) { x = &y; }

int main() {
  cout << "Hello world" << endl;

  unique_ptr<double> a(new double(1.0));
  cout << *a << endl;
  *a += 1.0;
  cout << *a << endl;
  // double b = 3;
  //  a = &b;
  //  cout << *a << endl;

  double *var = new double(1.0);

  cout << *var << endl;

  double b = 3;

  var = &b;

  cout << *var << endl;

  double *c = new double(1.0);

  point_x_to_y(c, b);

  cout << *c << endl;

  double *d = var;

  cout << c << endl;
  cout << d << endl;
  cout << *c << endl;
  cout << *d << endl;
}
