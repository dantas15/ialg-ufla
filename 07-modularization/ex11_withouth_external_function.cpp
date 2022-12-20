#include <iostream>
#include <array>
using namespace std;

int main()
{
  int teamsQuantity = 4;

  string names[teamsQuantity];
  int scores[teamsQuantity];

  cout << "Insira o nome das selecoes e a pontuacao (Ex.: Franca 30)" << endl;
  for (int i = 0; i < teamsQuantity; i++)
  {
    cin >> names[i] >> scores[i];

    cout << endl;
  }

  int lastTwoLowestScoresIndex[2] = {0, 0};

  for (int i = 0; i < teamsQuantity; i++)
  {
    int currPoint = scores[i];
    cout << currPoint << endl;

    if (currPoint < lastTwoLowestScoresIndex[0])
    {
      lastTwoLowestScoresIndex[0] = i;
      lastTwoLowestScoresIndex[1] = lastTwoLowestScoresIndex[0];
    }
    else if (currPoint < lastTwoLowestScoresIndex[1])
    {
      lastTwoLowestScoresIndex[1] = i;
    }
  }
  cout << "As seleções com menor pontuacoes foram: " << endl;

  for (int i = 0; i < 2; i++)
  {
    cout << "\n\t -" << names[lastTwoLowestScoresIndex[i]];
  }
}