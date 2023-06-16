#include <iostream>

using namespace std;

class MyClass {
public:
  double *data;

  MyClass(double *input_pointer) { data = input_pointer; }

  void print() { cout << *data << endl; }
};

int main() {
  cout << "Pointers and references" << endl;

  double a = 4.32;
  double *a_pt = 0;
  a_pt = &a;
  cout << (*a_pt) << endl;

  double *b = 0;
  b = &a;
  cout << *b << endl;

  MyClass myobj(b);
  myobj.print();

  double *c = 0;
  double d = 1.32;
  c = &d;
  cout << *c << endl;

  b = &d;
  myobj.print();

  return 0;
}
