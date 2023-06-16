#include <algorithm>
#include <complex>
#include <iostream>
#include <vector>

using namespace std;

//===================================================================
/// Function-type-object to perform comparison of complex data types
/// Needed to sort the complex eigenvalues into order based on the
/// size of the real part.
//==================================================================
template <class T> class ComplexLess {
public:
  /// Comparison in terms of magnitude of complex number
  bool operator()(const std::complex<T> &x, const std::complex<T> &y) const {
    // Return the order in terms of magnitude if they are not equal
    // Include a tolerance to avoid processor specific ordering
    if (std::abs(std::abs(x) - std::abs(y)) > 1.0e-10) {
      cout << "abs check" << endl;
      return std::abs(x) < std::abs(y);
    }
    // Otherwise sort on real part, again with a tolerance
    else if (std::abs(x.real() - y.real()) > 1.0e-10) {
      cout << "real check" << endl;
      return x.real() < y.real();
    }
    // Otherwise sort on imaginary part
    else {
      cout << "imag check" << endl;
      return x.imag() < y.imag();
    }
  }
};

//===================================================================
/// Function-type-object to perform comparison of complex data types
/// Needed to sort the complex eigenvalues into order based on the
/// size of the real part.
//==================================================================
template <class T> class ComplexLess2 {
public:
  /// Comparison in terms of magnitude of complex number
  bool operator()(const std::complex<T> &x, const std::complex<T> &y) const {
    // Sort on real part, again with a tolerance
    if (std::abs(x.real() - y.real()) > 1.0e-10) {
      cout << "real check" << endl;
      return x.real() < y.real();
    }
    // Otherwise sort on imaginary part
    else {
      cout << "imag check" << endl;
      return x.imag() < y.imag();
    }
  }
};

int main() {
  cout << "hello" << endl;

  vector<complex<double>> numbers(10);

  for (unsigned i = 0; i < numbers.size(); i++) {
    numbers[i].real(i % 3);
    numbers[i].imag(i % 5);
  }

  for (unsigned i = 0; i < numbers.size(); i++) {
    cout << "i: " << i << ", x: " << numbers[i].real() << " + "
         << numbers[i].imag() << "i," << endl;
  }

  cout << endl;

  vector<std::complex<double>> sorted_numbers = numbers;
  std::sort(sorted_numbers.rbegin(), sorted_numbers.rend(),
            ComplexLess2<double>());

  for (unsigned i = 0; i < sorted_numbers.size(); i++) {
    cout << "i: " << i << ", x: " << sorted_numbers[i].real() << " + "
         << sorted_numbers[i].imag() << "i," << endl;
  }

  return 0;
}
