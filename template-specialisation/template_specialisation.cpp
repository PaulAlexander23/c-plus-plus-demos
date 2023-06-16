#include <iostream>

using namespace std;

template <class T> class TemplatedClass {
public:
  TemplatedClass(T data) : Data(data) {}

  void print() { cout << "Generic print" << endl; }

  void print_data() { cout << "Generic print data: " << Data << endl; }

private:
  T Data;
};

template <> class TemplatedClass<int> {
public:
  TemplatedClass<int>(int data) : Data(data) {}

  void print() { cout << "int print" << endl; }

  void print_data() { cout << "int print data: " << Data << endl; }

private:
  int Data;
};

int main() {
  cout << "Template specialisation" << endl;
  TemplatedClass<unsigned> obj1(3);
  obj1.print();
  obj1.print_data();

  TemplatedClass<int> obj2(-1);
  obj2.print();
  obj2.print_data();

  TemplatedClass<double> obj3(3.14159);
  obj3.print();
  obj3.print_data();
}
