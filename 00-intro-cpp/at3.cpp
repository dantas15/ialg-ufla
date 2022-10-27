#include <iostream>

using namespace std;

int main()
{
  // foco: fazer o valor da mercadoria
  float dolar = 4.75;

  // inputs
  float valorProduto, valorFrete, valorSeguro;
  // calculos
  float valorConvertido, valorAduaneiro, baseICMS, valorICMS, valorFinal;

  cin >> valorProduto;
  cin >> valorFrete;
  cin >> valorSeguro;

  valorConvertido = (valorProduto + valorFrete + valorSeguro) * dolar;
  valorAduaneiro = valorConvertido * 0.6;
  
  baseICMS = (valorConvertido + valorAduaneiro) / 0.82;

  valorICMS = baseICMS * 0.18;

  valorFinal = valorConvertido + valorAduaneiro + valorICMS;

  cout << "R$ ";
  cout << valorFinal;
  
  return 0;
}