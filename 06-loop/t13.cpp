#include <fstream>
#include <iostream>
using namespace std;

int main()

{
  float valorShow, valorTotal;
  int dia = 1;
  char categoria;

  ifstream ler("ingresso.txt");

  ler >> valorShow;

  while (dia > 0 || dia < 28)
  {
    ler >> dia;
    if (dia > 0 || dia < 28)
    {
      ler >> categoria;

      if (dia >= 6 && dia <= 13)
      {
        if (categoria == 'E')
        {
          valorTotal += valorShow * 0.85;
        }

        if (categoria == 'A')
        {
          valorTotal += valorShow * 0.9;
        }
      }
      else if (dia >= 14 && dia <= 24)
      {
        if (categoria == 'E')
        {
          valorTotal += valorShow * 0.9;
        }

        if (categoria == 'A')
        {
          valorTotal += valorShow * 0.95;
        }
      }
      else
      {
        valorTotal += valorShow;
      }
    }
  }

  cout << valorTotal;

  ler.close();

  return 0;
}