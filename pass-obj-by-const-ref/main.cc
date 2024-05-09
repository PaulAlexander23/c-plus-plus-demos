#include <iostream>

using namespace std;

class Parameters {
public:
  int a;
  int b;
  Parameters() : a(2), b(3) {}
};

void print(Parameters &param) {
  param.a = 3;
  cout << param.a << " " << param.b << endl;
}
void print_const(Parameters const &param) {
  // param.a = 5;
  cout << param.a << " " << param.b << endl;
}

int main() {

  Parameters param;
  print(param);
  print_const(param);

  return 0;
}
