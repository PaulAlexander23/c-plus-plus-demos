#include <iostream>
#include <math.h>

using namespace std;

template <class T> T combine(T a, T b) { return a + b; }

template <unsigned N> unsigned power(unsigned a) { return pow(a, N); }

template <unsigned N> class test_static_template_members {
public:
  test_static_template_members() { set_static_member(0); }

  unsigned get_static_member() { return static_member; }

  void set_static_member(unsigned n) { static_member = n; }

  unsigned power(unsigned a) { return pow(a, N); }

private:
  static unsigned static_member;
};

template <unsigned N> unsigned test_static_template_members<N>::static_member;

int main() {
  cout << "Template script" << endl;

  unsigned a, b, c;
  a = 5;
  b = 8;
  c = combine<unsigned>(a, b);
  cout << "Unsigned. a: " << a << ", b: " << b << ", c: " << c << endl;

  double a2, b2, c2;
  a2 = 5.23;
  b2 = 8.5;
  c2 = combine<double>(a2, b2);
  cout << "Double. a2: " << a2 << ", b2: " << b2 << ", c2: " << c2 << endl;

  unsigned a3 = 2;
  cout << "Unsigned power. a3: " << a3 << ", a3^2: " << power<2>(a3)
       << ", a3^3: " << power<3>(a3) << endl;

  const unsigned a4 = 3;
  test_static_template_members<a4> my_obj;
  cout<<"Get static member: "<<my_obj.get_static_member()<<endl;
  my_obj.set_static_member(3);
  cout<<"Get static member: "<<my_obj.get_static_member()<<endl;
  cout<<"Power(3): "<<my_obj.power(3)<<endl;

  test_static_template_members<2> my_obj2;

  cout<<"Get static member: "<<my_obj.get_static_member()<<endl;

  my_obj.set_static_member(2);

  cout<<"Get static member: "<<my_obj2.get_static_member()<<endl;

  cout<<"Power(3): "<<my_obj2.power(3)<<endl;

  test_static_template_members<3> my_obj3;

  cout<<"Get static member: "<<my_obj.get_static_member()<<endl;

  my_obj.set_static_member(2);

  cout<<"Get static member: "<<my_obj3.get_static_member()<<endl;

  cout<<"Power(3): "<<my_obj3.power(3)<<endl;

  cout << "End of Template script" << endl;

  return 0;
}
