#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  float x1, y1, x2, y2, resultado;

  cin >> x1;
  cin >> y1;
  cin >> x2;
  cin >> y2;

  resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

  cout << resultado;

  return 0;
}