#include <chrono>
#include <iostream>

using namespace std;
using namespace std::chrono;

int main() {
  cout << "Time function" << endl;
  auto start_time = high_resolution_clock::now();

  double my_sum = 0.0;
  for (unsigned i = 0; i < 1e3; i++) {
    for (unsigned j = 0; j < 1e3; j++) {
      my_sum += double(i) / double(j+1);
    }
  }
  cout << "my_sum: " << my_sum << endl;

  auto end_time = high_resolution_clock::now();
  duration<double> diff = duration_cast<microseconds>(end_time - start_time);
  cout << "Total real-time duration: " << diff.count() << endl;
}
