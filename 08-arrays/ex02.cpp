#include <iostream>
#include <cstring>

using namespace std;

int* aumenta (int *v, int &tam) {
  int* novo = new int [tam+2];

  memcpy (novo, v, sizeof(int)*tam);
  tam +=2;
  // cout << "\n\nsecond type: " << typeid(novo[1]).name();
  // cout << "\n\nsecond value: " << novo[1];
  // cout << "\n\ntype: " << typeid(novo[-1]).name();
  // cout << "\n\nvalue: " << novo[-1] << endl << endl;
  return novo;
}

int main() {
  int tamanho = 2;
  int* v = new int [tamanho];

  int valor, i = 0;

  cin >> valor;

  while (valor != -1) {
    if(i == tamanho) {
      v = aumenta(v, tamanho);
    }

    v[i] = valor;
    // TODO: imprime(v,tamanho);
    i++;
    cin >> valor;
  }
}