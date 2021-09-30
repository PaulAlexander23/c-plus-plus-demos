#include "main.h"

#include "goodbye.h"
#include "hello.h"

#include "outputter.h"

int main() {
  hello();

  output("Main body.");

  goodbye();

  return 0;
}
