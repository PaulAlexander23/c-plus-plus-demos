#include <iostream>

// Generic example class
class Widget {
private:
  std::string name;

public:
  // Constructor
  Widget(std::string passed_name) {
    std::cout << "Widget constructor" << std::endl;
    name = passed_name;
  }

  void print() {
    std::cout << name << ".a: " << this->a << std::endl;
    std::cout << "&" << name << ".a : " << &this->a << std::endl;

    std::cout << name << ".b: " << this->b << std::endl;
    std::cout << "&" << name << ".b : " << &this->b << std::endl;

    std::cout << name << ".c: " << this->c << std::endl;
    std::cout << "&" << name << ".c : " << &this->c << std::endl;
  }

  // We can define integers here...
  static const unsigned a = 5;
  // ... but not some other types, try
  // static const double a = 5;

  // If we want a static const double, this needs to be defined elsewhere
  static const double b;
  static const double c;
};

// If we want to access the address of the static constant, we must define it
// too. However it has already been defined in the class declaration, so we
// don't assign it any value here.
const unsigned Widget::a;

// This doesn't work for doubles however.
// const double Widget::a;

// This is where we can define a static double class member
const double Widget::b = 3.4;
// ... or assign it a value from a variable by value.
const double Widget::c = Widget::b;

int main() {
  std::cout << "Static class constants" << std::endl;

  Widget my_widget("my_widget");

  my_widget.print();

  Widget my_second_widget("my_second_widget");

  my_second_widget.print();

  return 0;
}
