/*

Faça um programa que receba da entrada padrão um valor inteiro de três dígitos (100 < N < 999).
O programa deve calcular e imprimir na saída padrão a soma dos três dígitos e salvar em um arquivo saida.txt (sem acento) o produto entre os três dígitos.

Entrada:
- Número inteiro de três dígitos.

Saída (saída padrão):
- A soma entre os três dígitos.

Saída (saida.txt):
- O produto entre os três dígitos.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int input, n1, n2, n3;

  do {
    cin >> input;
  } while (input < 100 || input > 999);

  n1 = input / 100;
  n2 = (input / 10) % 10;
  n3 = input % 10;

  cout << endl << n1 + n2 + n3;

  ofstream record ("saida.txt");

  record << n1 * n2 * n3;

  return 0;
}