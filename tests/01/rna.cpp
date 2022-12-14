#include <iostream>
#include <string>

using namespace std;

int main() {
  string dna, rna = "";

  cin >> dna;

  for (int i = 0; i < dna.length(); i++) {
    char d = dna[i];

    if(d == 'T') {
      rna += 'U';
    } else {
      rna += d;
    }
  }

  cout << rna;

  return 0;
}