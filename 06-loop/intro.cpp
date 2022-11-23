#include <iostream>
using namespace std;

// ler 10 valores inteiros positivos
// maior
// menor
// media dos numeros

int main()
{
  int num, acc = 0, maior, menor;

  for (int i = 0; i < 10; i++)
  {
    cin >> num;
    acc = acc + num;

    if (i == 0)
    {
      maior = num;
      menor = num;
    }

    if (num > maior)
    {
      maior = num;
    }

    if (num < menor)
    {
      menor = num;
    }
  }

  cout << "maior: " << maior << endl;
  cout << "menor: " << menor << endl;
  cout << "média: " << acc / 10.0 << endl;

  return 0;
}