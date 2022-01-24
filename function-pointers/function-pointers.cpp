#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int first_function() {
  cout << "Hello world!" << endl;

  return 0;
}

int second_function() {
  cout << "Goodbye cruel world!" << endl;

  return 1;
}

double third_function(int x) {
  double f = (double(x) * 3 + 2) / 5;

  cout << "x: " << x << ", f(x): " << f << endl;

  return f;
}

double time_dependent_function(double t) {
    return t;
}

double time_dependent_function_2(double t, double x) {
  if (t < 1) {
    return x;
  } else {
    return x * exp(5 * (-t + 1)) + (t - 1) * x * 2;
  }
}

int call_function_pointer(int (*fcn_pt)()) {
  int output = 0;

  output = fcn_pt();

  cout << "Output: " << output << endl;

  output = (*fcn_pt)();

  return output;
}

class Square {
public:
  Square(double side_length) { r = side_length; }

  double public1() { return area(); }

  int public2() { return 1; }

  typedef double (*sourceFunctionPointer)(const double &x);

  /*sourceFunctionPointer get_set_radius_fcn()
    {
      //return this->set_radius;
    }*/

private:
  double r;

  double set_radius(const double radius) {
    r = radius;
    return 0;
  }

  double area() { return r * r; }
};

void display_double_vector(vector<double> x) {
  for (double value : x) {
    cout << value << ", ";
  }
  cout << endl;
}

int main() {
  cout << "Function pointers." << endl;

  int (*fcn_pt)(){&first_function};

  int output = 0;

  output = fcn_pt();

  cout << "Output: " << output << endl;

  fcn_pt = &second_function;

  output = fcn_pt();

  cout << "Output: " << output << endl;

  double (*fcn_pt2)(int);

  fcn_pt2 = &third_function;

  double output2 = 0.0;
  output2 = fcn_pt2(5);

  cout << "Output: " << output2 << endl;

  output2 = (*fcn_pt2)(3);

  cout << "Output: " << output2 << endl;

  call_function_pointer(fcn_pt);

  cout << endl;
  cout << "Classes!" << endl;
  double r = 13.4;
  Square s1(r);
  cout << "r: " << r << ", Area: " << s1.public1() << endl;

  // int (*set_radius)(double) {};
  // s1.get_set_radius_fcn(set_radius);

  cout << "Time dependence" << endl;
  double t = 0.0;
  cout << "t: " << t << endl;
  cout << "f(t): " << time_dependent_function(t) << endl;
  t = 1.0;
  cout << "t: " << t << endl;
  cout << "f(t): " << time_dependent_function(t) << endl;
  typedef double (*time_independent_function)();
  time_independent_function g = [t]()->double{time_independent_function(t)};






  cout << "Time dependence 2" << endl;
  t = 0.0;
  cout << "t: " << t << endl;
  vector<double> x;
  unsigned x_n = 10;
  double x_l = 2;
  for (unsigned n = 0; n < x_n; n++) {
    x.push_back(double(n + 1) / double(x_n) * x_l);
  }
  cout << "x: ";
  display_double_vector(x);

  vector<double> y;
  for (double x_iter : x) {
    y.push_back(time_dependent_function_2(t, x_iter));
  }
  cout << "y: ";
  display_double_vector(y);

  t = 2.0;
  y.clear();
  for (double x_iter : x) {
    y.push_back(time_dependent_function_2(t, x_iter));
  }
  cout << "y: ";
  display_double_vector(y);


  //Want time_dependent_function_at_t(x_iter)
  //typedef double (*time_independent_function_2)(double &x);
  //time_independent_function time_dependent_function_at_t = &time_dependent_function_2(1.0, ...);

  return 0;
}
