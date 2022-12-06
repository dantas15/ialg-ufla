#include <iostream>
#include <iomanip>

using namespace std;

float valInclinacao(int altura, int base)
{
  return ((float)altura * 100) / (float)base;
}

int main()
{
  int qntRampas, qntRampasAdequadas = 0;

  int altura, base;

  cin >> qntRampas;

  float inclinacoes[qntRampas] = {};

  for (int i = 0; i < qntRampas; i++)
  {
    cout << endl;
    cin >> altura >> base;
    inclinacoes[i] = valInclinacao(altura, base);

    if (inclinacoes[i] <= 8)
    {
      qntRampasAdequadas++;
    }
  }

  for (int i = 0; i < qntRampas; i++) {
    cout << endl << fixed << setprecision(1) << inclinacoes[i];
  }

  cout << endl << qntRampasAdequadas;

  return 0;
}