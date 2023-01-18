#include <iostream>

using namespace std;

int main()
{

  int qntDigitos = 0, qntMult2 = 0, qntMult3 = 0, qntMult23 = 0;

  cin >> qntDigitos;

  int *ptrNums = new int[qntDigitos];

  for (int i = 0; i < qntDigitos; i++) {
    cin >> ptrNums[i];
  }

  // mostrar resultados
  cout << endl;

  for (int i = 0; i < qntDigitos; i++)
  {
    if (ptrNums[i] % 2 == 0)
    {
      if (qntMult2 > 0) {
        cout << " ";
      }
      cout << ptrNums[i];
      qntMult2++;
    }
  }
  if (qntMult2 == 0) {
    cout << 0;
  }

  cout << endl;

  for (int i = 0; i < qntDigitos; i++)
  {
    if (ptrNums[i] % 3 == 0)
    {
      if (qntMult3 > 0) {
        cout << " ";
      }
      cout << ptrNums[i];
      qntMult3++;
    }
  }
  if (qntMult3 == 0) {
    cout << 0;
  }

  cout << endl;

  for (int i = 0; i < qntDigitos; i++)
  {
    if (ptrNums[i] % 2 == 0 && ptrNums[i] % 3 == 0)
    {
      if (qntMult23 > 0) {
        cout << " ";
      }
      cout << ptrNums[i];
      qntMult23++;
    }
  }
  if (qntMult23 == 0) {
    cout << 0;
  }

  delete[] ptrNums;
  return 0;
}