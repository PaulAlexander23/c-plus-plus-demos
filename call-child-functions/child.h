#pragma once

#include "parent.h"
#include <iostream>

class child : public parent {
public:
  void shout() { std::cout << "Oi oi!" << std::endl; }
};
