#include <iostream>

using namespace std;

int first_function()
{
  cout<<"Hello world!"<<endl;

  return 0;
}

int second_function()
{
  cout<<"Goodbye cruel world!"<<endl;

  return 1;
}

double third_function(int x)
{
  double f = (double(x) * 3 + 2)/5;

  cout<<"x: "<<x<<", f(x): "<<f<<endl;

  return f;
}

int call_function_pointer(int (*fcn_pt)())
{
  int output = 0;

  output = fcn_pt();

  cout<<"Output: "<<output<<endl;

  output = (*fcn_pt)();

  return output;
}

class Square
{
public:
  Square(double side_length)
    {
      r = side_length;
    }

  double public1()
    {
      return area();
    }

  int public2()
    {

      return 1;
    }

  typedef double(*sourceFunctionPointer)(const double& x);

  sourceFunctionPointer get_set_radius_fcn()
    {
      //return this->set_radius;
    }

private:
    double r;

    double set_radius(const double radius)
      {
        r = radius;
        return 0;
      }

    double area()
      {
        return r * r;
      }
};

int main()
{
  cout<<"Function pointers."<<endl;

  int (*fcn_pt)(){&first_function};

  int output = 0;

  output = fcn_pt();

  cout<<"Output: "<<output<<endl;

  fcn_pt = &second_function;

  output = fcn_pt();

  cout<<"Output: "<<output<<endl;

  double (*fcn_pt2)(int);

  fcn_pt2 = &third_function;

  double output2 = 0.0;
  output2 = fcn_pt2(5);

  cout<<"Output: "<<output2<<endl;

  output2 = (*fcn_pt2)(3);

  cout<<"Output: "<<output2<<endl;

  call_function_pointer(fcn_pt);

  cout<<endl;
  cout<<"Classes!"<<endl;
  double r = 13.4;
  Square s1(r);
  cout<<"r: "<<r<<", Area: "<<s1.public1()<<endl;

  int (*set_radius)(double) {};
  //s1.get_set_radius_fcn(set_radius);

  return 0;
}
