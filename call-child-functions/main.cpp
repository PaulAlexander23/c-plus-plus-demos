#include <iostream>
#include "child.h"

using namespace std;

int main() {
  cout << "Call child function" << endl;

  child obj;

  obj.shout();

  return 0;
}
