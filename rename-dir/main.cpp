#include <iostream>

// Class to encapsulate the parameter 's' and provide a function pointer
class FunctionFactory {
private:
  double s; // Parameter that the function depends on

  // Static function to act as the generated function
  static double generatedFunction(double t, double x,
                                  const FunctionFactory *context) {
    return context->s * t + x; // Use the current value of `s`
  }

public:
  // Constructor to initialize `s`
  explicit FunctionFactory(double s_value) : s(s_value) {}

  // Method to update the value of `s`
  void setParameter(double s_value) { s = s_value; }

  // Method to get the current value of `s`
  double getParameter() const { return s; }

  // Method to return the function pointer
  double (*getFunctionPointer(const FunctionFactory *&context))(double,
                                                                double) {
    context = this; // Pass the current instance as the context
    return [context](double t, double x) -> double {
      // Lambda that calls the static function with the context
      return FunctionFactory::generatedFunction(t, x, context);
    };
  }
};

int main() {
  // Example usage
  double initial_s = 2.0;

  // Create an instance of the factory
  FunctionFactory factory(initial_s);

  // Set up a context pointer to pass to the function
  const FunctionFactory *context = nullptr;

  // Get the function pointer
  double (*myFunction)(double, double) = factory.getFunctionPointer(context);

  // Call the function via the pointer
  double t = 3.0, x = 5.0;
  double result = myFunction(t, x);

  std::cout << "Result with initial s=" << factory.getParameter()
            << ": myFunction(" << t << ", " << x << ") = " << result
            << std::endl;

  // Update the parameter `s`
  factory.setParameter(4.0);

  // Call the function again with the updated `s`
  result = myFunction(t, x);
  std::cout << "Result after updating s=" << factory.getParameter()
            << ": myFunction(" << t << ", " << x << ") = " << result
            << std::endl;

  return 0;
}
