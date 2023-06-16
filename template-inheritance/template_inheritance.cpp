#include <iostream>

using namespace std;

template <class T> class Base {
public:
  Base(T data) : Data(data) {}

  void print() { cout << Data << endl; }

  T Data;
};

template <class T> class Derived : public Base<T> {
public:
  Derived(T data) : Base<T>(data) {}

  void print_extra() { cout << "bonus: " << Base<T>::Data << endl; }
};

int main() {
  cout << "Template inheritance" << endl;
  Base<int> obj1(-1);
  obj1.print();

  Derived<double> obj2(-2.1);
  obj2.print();
  obj2.print_extra();
}
