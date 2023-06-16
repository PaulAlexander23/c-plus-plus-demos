#include <iostream>

using namespace std;

class A {

private:
  double Value;

public:
  A() { Value = 3; }
  void print_value() { cout << Value << endl; }

  double &reference_to_value() { return Value; }

  void set_value(double v) { Value = v; }
};

int main() {
  cout << "return by reference" << endl;
  A obj_a;
  obj_a.print_value();
  cout << obj_a.reference_to_value() << endl;
  double &ref_a = obj_a.reference_to_value();
  cout << ref_a << endl;
  ref_a += 1;
  cout << ref_a << endl;
  obj_a.print_value();
  obj_a.set_value(2.0);
  obj_a.print_value();
  cout << ref_a << endl;
  double *a_pt = &ref_a;
  cout << a_pt << endl;
  cout << *a_pt << endl;
  *a_pt = 5.0;
  cout << *a_pt << endl;
  cout << ref_a << endl;
  obj_a.print_value();
  double *b_pt = &obj_a.reference_to_value();
  cout << b_pt << endl;
  cout << *b_pt << endl;
  *b_pt = 7.0;
  cout << *b_pt << endl;
  cout << *a_pt << endl;
  cout << ref_a << endl;
  obj_a.print_value();
}
