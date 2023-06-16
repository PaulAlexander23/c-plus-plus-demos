#include <iostream>

class NonTemplatedBaseClass {
public:
  NonTemplatedBaseClass() { value = 0; }

  void print() { std::cout << value << std::endl; }

protected:
  unsigned value;
};

template <class T> class TemplatedClass : public NonTemplatedBaseClass {
public:
  TemplatedClass() { this->value = 1; }
};

class NonTemplatedParent {
public:
  void yell() { std::cout << "AAAAAAhh" << std::endl; }
};

template <>
class TemplatedClass<int> : public NonTemplatedBaseClass,
                            public NonTemplatedParent {};

int main() {

  TemplatedClass<unsigned> an_obj;

  an_obj.print();

  NonTemplatedParent mom;

  mom.yell();

  TemplatedClass<int> an_obj2;

  an_obj2.print();

  return 0;
}
