#include <iostream>

class A {
public:
  void hello() { std::cout << "hello" << std::endl; }
};

template <class T> class Templated {
public:
  void hello() { std::cout << "hello!" << std::endl; }
  void hello_t() {
    T t;
    t.hello();
  }
};

/*
template <A T> class ATemplated {
public:
  void hello() { std::cout << "hello!" << std::endl; }
  void hello_t() {
    T t;
    t.hello();
  }
};
*/

int main() {
  A a_obj;
  a_obj.hello();

  Templated<A> templated_obj;
  templated_obj.hello();
  templated_obj.hello_t();

  /*
  ATemplated<A> a_templated_obj;
  a_templated_obj.hello();
  a_templated_obj.hello_t();
  */

  return 0;
}
