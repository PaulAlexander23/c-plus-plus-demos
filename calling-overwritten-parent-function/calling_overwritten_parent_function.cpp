#include <iostream>

using namespace std;

class Base {
public:
  Base() {}

  void hello() { cout << "Hello base" << endl; }

  void call_ola() {
    ola();
    this->greetings();
  }

  void boy() { cout << "booooiiiiiiii" << endl; }

  virtual void greetings() { cout << "greetings" << endl; }

private:
  virtual void ola() { cout << "Ola" << endl; }
};

class Child : virtual public Base {
public:
  Child() {}

  void hello() { cout << "Hello to you too" << endl; }

  virtual void greetings() { cout << "GREETINGS" << endl; }

private:
  void ola() { cout << "Ola Ola" << endl; }
};

int main() {
  cout << "Calling overwritten parent function" << endl;

  Base *obj1 = new Base;

  obj1->hello();

  obj1->call_ola();

  Child *obj2 = new Child;

  obj2->hello();

  dynamic_cast<Base *>(obj2)->hello();

  obj2->call_ola();

  obj2->boy();

  return 0;
}
