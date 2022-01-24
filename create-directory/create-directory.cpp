#include "boost/filesystem.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Create directory" << endl;
  string folder_name = "temp";
  bool has_directory_been_created =
      boost::filesystem::create_directory(folder_name);

  cout << "Created directory? ";
  if (has_directory_been_created) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}
