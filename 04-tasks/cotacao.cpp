#include <iostream>
using namespace std;
int main()
{
  float num;

  cout << "Insira um número em reais: R$";
  cin >> num;

  cout << "\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";
  cout << "\nValor em dólar: US$" << num * 5.12 << " (Cotação em 5,12)";
  cout << "\nValor em marco alemão: " << num * 2.66 << " (Cotação em 2,66)";
  cout << "\nValor em euro: " << num * 5.48 << "  € (Cotação em 5,48)";
  cout << "\n\n-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n";

  return 0;
}