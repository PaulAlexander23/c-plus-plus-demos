#include "main.h"

#include "hello.h"
#include "outputter.h"
#include "goodbye.h"

int main() {
  hello();

  output("Main body.");

  goodbye();

  return 0;
}
