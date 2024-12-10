#include <iostream>

using namespace std;

class IndexNumbering {
public:
  virtual int unknown_index() = 0;
  virtual int eqn_index() = 0;
};

class NodalIndexNumbering : virtual IndexNumbering {
public:
  int unknown_index() { return 0; }
  int eqn_index() { return 0; }
};

class InternalIndexNumbering : virtual IndexNumbering {
public:
  int eqn_index() { return 1; }
  int unknown_index() { return 0; }
};

class EquationNumbering {
public:
  virtual int eqn() = 0;
  virtual int unknown() = 0;
};

class IndexToEquations : public virtual IndexNumbering,
                         public virtual EquationNumbering {
public:
  int eqn() { return eqn_index(); }
  int unknown() { return unknown_index(); }
};

class Equations : public virtual EquationNumbering {
public:
  void print() {
    cout << eqn() << endl;
    cout << unknown() << endl;
  }
};

class NodalElement : public virtual Equations,
                     public virtual IndexToEquations,
                     public virtual NodalIndexNumbering {};

class InternalElement : public virtual Equations,
                        public virtual IndexToEquations,
                        public virtual InternalIndexNumbering {};

int main() {

  NodalElement eq;

  eq.print();

  InternalElement ieq;

  ieq.print();

  return 0;
}
