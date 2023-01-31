#include <iostream>

using namespace std;

void imprime(double **matriz, int l, int c) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      cout << matriz[i][j] << " ";
    }
  }
  cout << endl;
}

double somaElementos(double **matriz, int l, int c) {
  double total = 0;
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      total += matriz[i][j];
    }
  }
  return total;
}

int main () {
  int linha, coluna;

  cin >> linha >> coluna;

  // alocação dinâmica da matriz

  double** matriz = new double* [linha];

  for (int i = 0; i < linha; i++) {
    matriz[i] = new double [coluna];
  }

  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < linha; j++) {
      cin >> matriz[i][j];
    }
  }

  imprime(matriz, linha, coluna);

  cout << somaElementos(matriz, linha, coluna);

  for (int i = 0; i < linha; i++) {
    delete [] matriz[i];
  }

  delete [] matriz;

  return 0;
}