#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "---------- Vector example script." << endl;

  vector<int> integerVector;
  vector<double> doubleVector;

  for (int i = 0; i < 10; i++)
    integerVector.push_back(i);

  for (int j = 0; j < 5; j++)
    doubleVector.push_back(j / 1.3);

  cout << "integerVector[3]: " << integerVector[3] << endl;

  cout << "doubleVector[3]: " << doubleVector[3] << endl;

  cout << "integerVector.size(): " << integerVector.size() << endl;
  cout << "integerVector.max_size(): " << integerVector.max_size() << endl;

  cout << "doubleVector.size(): " << doubleVector.size() << endl;
  cout << "doubleVector.max_size(): " << doubleVector.max_size() << endl;

  cout << "---------- End of vector example script." << endl << endl;
}
