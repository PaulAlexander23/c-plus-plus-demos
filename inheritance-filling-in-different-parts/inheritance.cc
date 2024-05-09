#include <iostream>

using namespace std;

class A {
public:
  A() { cout << "a"; }

  void hello(){};
  void goodbye(){};
};

class B : virtual public A {
public:
  B() : A() { cout << "b"; }

  void hello() { cout << "hello" << endl; };
};

class C : virtual public A {
public:
  C() : A() { cout << "c"; }

  void goodbye() { cout << "goodbye" << endl; };
};

class D : public B, public C {};

int main() {
  A a;
  a.hello();
  a.goodbye();
  cout << endl;

  B b;
  cout << endl;

  C c;
  cout << endl;

  D d;
  cout << endl;
  d.hello();
  d.goodbye();

  return 0;
}
