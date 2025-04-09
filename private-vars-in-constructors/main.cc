#include <iostream>

class A{

private:
  unsigned value;
public:
  A():value(3){}
  void print(){std::cout<<value<<std::endl;}
};
class B:public A{
public:
  B():value(4){};
};

int main(){
    B b;
    b.print();

    return 0;
}
