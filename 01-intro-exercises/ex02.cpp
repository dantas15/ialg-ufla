#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float raio, resultado;

  cin >> raio;

  resultado = M_PI * pow(raio, 2);

  cout << endl << resultado;

  return 0;
}