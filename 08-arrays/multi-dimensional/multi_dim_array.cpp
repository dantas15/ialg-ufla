#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  int numeros[3][4];

  // Default input
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> numeros[i][j];
    }
  }

  // with files input
  int n = 0;

  ifstream ler ("entrada.txt");

  ler >> n;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      ler >> numeros[i][j];
    }
  }


  return 0;
}