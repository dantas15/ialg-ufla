#include <iostream>
#include <string>

using namespace std;

int main()
{
  string dna, rna = "";

  cin >> dna;

  int i = 0;
  while (i < dna.length())
  {
    char d = dna[i];

    if (d == 'T')
    {
      rna += 'U';
    }
    else
    {
      rna += d;
    }
    i++;
  }

  cout << rna;

  return 0;
}