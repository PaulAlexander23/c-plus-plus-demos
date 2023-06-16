#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

class MyError {
public:
  MyError(string error_message) : message(error_message) {}

  string get_message() { return message; }

private:
  string message;
};

class MyRuntimeError : runtime_error {
public:
  MyRuntimeError(const string &error_message) : runtime_error(error_message) {}

private:
};

int main() {
  try {
    throw(MyError("hello world!"));
  } catch (MyError &my_error) {
    cout << my_error.get_message() << endl;
  }

  try {
    throw(MyRuntimeError("hello world!"));
  } catch (MyRuntimeError &my_error) {
    //  cout << my_error.what() << endl;
  }

  throw runtime_error("error");

  int *a;
  cout << *a << endl;
}
