#include <iostream>

using namespace std;

const int LINHAS = 10;
const int COLUNAS = 10;

int main () {
  int m[LINHAS][COLUNAS];

  for (int i = 0; i < LINHAS; i++) {
   for (int j = 0; j < COLUNAS; j++) {
    cin >> m[i][j];
   }
  }

  int linhaMaiorEl = 0, colMenorElemento = 0, maiorElemento = m[0][0], menorElemento = m[0][0];

  for (int i = 0; i < LINHAS; i++) {
   for (int j = 0; j < COLUNAS; j++) {
    if (m[i][j] > maiorElemento) {
      maiorElemento = m[i][j];
      linhaMaiorEl = i;
    }
   }
  }

  for (int j = 0; j < COLUNAS; j++) {
    if(m[linhaMaiorEl][j] < menorElemento) {
      menorElemento = m[linhaMaiorEl][j];
      colMenorElemento = j;
    }
  }

  cout << endl << menorElemento << endl << linhaMaiorEl << " " << colMenorElemento << endl;
}


/* Exmample

1  2  3  4  5  6  7 8  9  0
11  4 32  5  6  8  9 2  3  1
 2  3  5  6  7  8  1 0  3  1
 1  3 45  2  6  8  9 0  2  0
 4 30  4  2  6 18  5 0  1  0
 2  3 40  2  6  8 19 0 45  9
 3  2  5  7  7  8 10 0  2  2
 1  3 22  2 13  6  9 1  1  0
 4 30  4  2  6 18  5 0  9 10
 2  3 34  2  6  8 19 0  0  0

 Output:
0
3 7
*/