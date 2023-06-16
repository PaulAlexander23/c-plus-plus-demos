#include <iostream>

using namespace std;

class A {
public:
  A() {
    my_pointer = new double(1.0);
    pointer_to_change = my_pointer;
  }

  ~A() { delete my_pointer; }

  double *&change_ya_pointer_mate() { return pointer_to_change; }

  void display_ya_pointer() {
    cout << "*pointer_to_change = " << *pointer_to_change << endl;
  }

private:
  double *my_pointer;
  double *pointer_to_change;
};

int main() {
  cout << "Update pointer in class." << endl;

  A obj;

  obj.display_ya_pointer();

  double *new_double = new double(2.0);

  cout << "Changing to " << *new_double << endl;

  obj.change_ya_pointer_mate() = new_double;

  obj.display_ya_pointer();

  delete new_double;

  return 0;
}
