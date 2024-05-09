#include <iostream>

using namespace std;

class ClassA;
class ClassB;
class ClassC;

class ClassA {
  friend class ClassB;

  int _private_number;

protected:
  double _very_secret_number;

public:
  ClassA() : _very_secret_number(3.4){};

  void print() { cout << "Class A" << endl; };
};

class ClassB {

public:
  ClassB() {
    ClassA obj_a;
    cout << obj_a._very_secret_number << endl;
  }
};

class ClassC : ClassB {
public:
  void print() {
    ClassA obj_a;
    cout << obj_a._very_secret_number << endl;
  }
};

int main() {
  cout << "Friend inheritance." << endl;

  ClassA obj_a;
  obj_a.print();

  ClassB obj_b;
  // obj_b.print();

  ClassC obj_c;

  return 0;
}
