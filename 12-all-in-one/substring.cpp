#include <iostream>

using namespace std;

int main() {
  string filename = "fazendo";
  size_t idx = filename.find_last_of("ndo");

  cout << "find_last_of (" << idx << ")";
  cout << "\nsubstr (" << filename.substr(idx - 2) << ")";
  

  return EXIT_SUCCESS;
}