#include <iostream>
#include <cstring>

using namespace std;

struct Time
{
  char *nome;
  int totalPontos;
  int totalVitorias;
  int saldoGols;
};

void selectionSort(Time times[], int qntTimes)
{
  for (int i = 0; i < qntTimes - 1; i++)
  {
    int maior = i;

    for (int j = i + 1; j < qntTimes; j++)
    {
      // Quem tem mais pontos aparece em primeiro
      if (times[j].totalPontos > times[maior].totalPontos)
      {
        maior = j;
      }
      else if (times[j].totalPontos == times[maior].totalPontos)
      {
        // Caso empate de pontos, veja o total de vitorias
        if (times[j].totalVitorias > times[maior].totalVitorias)
        {
          maior = j;
        }
          // Caso empate de vitorias, veja o total de gols
        else if (times[j].totalVitorias == times[maior].totalVitorias)
        {
          if (times[j].saldoGols > times[maior].saldoGols)
          {
            maior = j;
          }
        }
      }
    }

    if (maior != i)
    {
      swap(times[i], times[maior]);
    }
  }
}

int main()
{
  int qntTimes;
  cin >> qntTimes;

  Time times[qntTimes];

  for (int i = 0; i < qntTimes; i++)
  {
    string nomeString;
    cin >> nomeString;

    times[i].nome = new char[nomeString.length()];
    strcpy(times[i].nome, nomeString.c_str());

    cin >> times[i].totalPontos;
    cin >> times[i].totalVitorias;
    cin >> times[i].saldoGols;
  }

  selectionSort(times, qntTimes);

  for (int i = 0; i < qntTimes; i++)
  {
    cout << endl;

    for (int c = 0; c < strlen(times[i].nome); c++)
    {
      cout << times[i].nome[c];
    }

    cout << " " << times[i].totalPontos << " " << times[i].totalVitorias << " " << times[i].saldoGols;
  }

  // desalcar memoria
  for (int i = 0; i < qntTimes; i++)
  {
    delete[] times[i].nome;
  }

  return 0;
}

/* Input example

5
DesertorFC 9 3 10
CarrascoFC 13 4 7
Campinais 13 4 9
Machado 11 3 10
RealSport 1 0 -4

*/

/* Output example

Campinais 13 4 9
CarrascoFC 13 4 7
Machado 11 3 10
DesertorFC 9 3 10
RealSport 1 0 -4

*/