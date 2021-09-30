#include <iostream>

using namespace std;

class myClass {
public:
  myClass(unsigned A, unsigned *B);

  ~myClass();

  unsigned get_a();

  unsigned get_b();

private:
  unsigned a;
  unsigned *b;
};

myClass::myClass(unsigned A, unsigned *B) : a(A), b(B) {} // The order is important

myClass::~myClass() {}

unsigned myClass::get_a() { return this->a; }

unsigned myClass::get_b() { return (*(this->b)); }

class myClass2 {
public:
  myClass2(unsigned A, unsigned *B);

  ~myClass2();

  unsigned get_a();

  unsigned get_b();

private:
  unsigned a;
  unsigned *b;
};

myClass2::myClass2(unsigned A, unsigned *B) {
  this->a = A;
  this->b = B;
}

myClass2::~myClass2() {}

unsigned myClass2::get_a() { return this->a; }

unsigned myClass2::get_b() { return (*(this->b)); }

int main() {
  cout << "Set class variable pointers in constructor" << endl;

  unsigned A = 4;
  unsigned B = 3;

  myClass myObj(A, &B);

  cout << myObj.get_a() << endl;
  cout << myObj.get_b() << endl;
  B = 2;
  cout << myObj.get_b() << endl;

  myClass2 myObj2(A, &B);

  cout << myObj2.get_a() << endl;
  cout << myObj2.get_b() << endl;
  B = 4;
  cout << myObj2.get_b() << endl;

  return 0;
}
