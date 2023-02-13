#include <iostream>

using namespace std;

struct Ponto {
  int x; // vertice inferior esquerdo
  int y; // veritce superior direito
};

int main() {
  Ponto p;
  int linhas, colunas = 4, result = 0;
  cin >> p.x >> p.y;
  cin >> linhas;

  if(linhas <= 1) {
    result = 0;
  } else {
    int vetor [linhas][colunas];

    for(int i = 0; i < linhas; i++) {
      for (int j = 0; j < colunas; j++) {
        cin >> vetor[i][j];
      }
    }

    for (int i = linhas-1; i > 0; i--) {
      for (int j = 0; j < colunas - 2; j++) {
        if(vetor[i][j] == p.x) {
          for (int k = i - 1; k >= 0; k--) {
            for (int y = j + 2; y < colunas; y++) {
              if(vetor[k][y] == p.y) {
                result++;
              }
            }
          }
        }
      }
    }
  }

  cout << result;

  return 0;
}