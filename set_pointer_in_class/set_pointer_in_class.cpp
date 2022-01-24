#include <iostream>

using namespace std;

class A {
public:
  A() { this->set_time(0.0); };
  ~A(){};

  void set_time(double t) { this->time = t; };

  void step_time(double dt) { this->time += dt; };

  double get_time() { return this->time; };

  double &get_time_ref() { return this->time; };

private:
  double time;
};

int main() {
  A my_class;

  cout << my_class.get_time() << endl;

  my_class.step_time(0.1);

  cout << my_class.get_time() << endl;

  double &local_time = my_class.get_time_ref();

  cout << local_time << endl;

  return 0;
}
