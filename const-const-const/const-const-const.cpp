#include <iostream>

using namespace std;

double fct_a() { return 3.0; }

const double fct_b() { return 3.0; }

double *fct_c() {
  double *a = new double;
  *a = 3.0;
  return a;
}

const double *fct_d() {
  double *a = new double;
  *a = 4.0;
  return a;
}

double const fct_e() { return 3.0; }

class MyClass {
public:
  MyClass() : x_pt(0) {}

  void set_x(unsigned *const &x) {

    cout << "set_x" << endl;
    x_pt = x;
    cout << x_pt << endl;
  }

  void print() {
    cout << "print" << endl;
    cout << x_pt << endl;
    if (x_pt) {
      cout << *x_pt << endl;
    }
  }

private:
  unsigned *x_pt;
};

int main() {
  cout << "const const CONST!!" << endl;

  const double a = 1.0;

  cout << "a = " << a << endl;

  const double *b = &a;

  cout << "b = " << b << endl;

  cout << "*b = " << *b << endl;
  // cout << "++(*b) = " << ++(*b) << endl;
  double c = 2.0;
  cout << "c = " << c << endl;
  b = &c;
  cout << "*b = " << *b << endl;
  // cout << "++(*b) = " << ++(*b) << endl;

  double const *d = &a;
  cout << "*d = " << *d << endl;
  d = &c;
  cout << "*d = " << *d << endl;
  // cout << "++(*d) = " << ++(*d) << endl;

  double *e = &c;
  cout << "*e = " << *e << endl;
  // e  = &a;
  // cout << "*e = " << *e << endl;
  cout << "++(*e) = " << ++(*e) << endl;

  cout << "fct_a() = " << fct_a() << endl;
  cout << "fct_b() = " << fct_b() << endl;

  e = fct_c();
  cout << "++(*e) = " << ++(*e) << endl;

  b = fct_d();
  cout << "*b = " << *b << endl;
  // cout << "++(*b) = " << ++(*b) << endl;

  double const *f;
  f = &a;
  cout << "*f: " << *f << endl;

  unsigned x = 3;
  MyClass my_obj;

  my_obj.print();

  my_obj.set_x(&x);

  x = 4;

  my_obj.print();

  unsigned *y = 0;

  my_obj.set_x(y);

  my_obj.print();

  *y = 3;

  my_obj.print();

  return 0;
}
