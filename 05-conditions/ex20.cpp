#include <iostream>

using namespace std;

int main()
{
  // opcional
  float valPicanha = 28.9, valAlcatra = 19.90, valLinguica = 7.95, valEspetinhoVeg = 2.99, valSal = 1.5, valFarinha = 1.85, valCarvao = 8.7;
  // declarando variavies
  int qntPicanha, qntAlcatra, qntLinguica, qntEspetinhoVeg, qntSal, qntFarinha, qntCarvao;
  float total, desconto, totalComDesconto;

  cin >> qntPicanha;
  cin >> qntAlcatra;
  cin >> qntLinguica;
  cin >> qntEspetinhoVeg;
  cin >> qntSal;
  cin >> qntFarinha;
  cin >> qntCarvao;

  total = (valPicanha * qntPicanha) + (valAlcatra * qntAlcatra) + (valLinguica * qntLinguica) + (valEspetinhoVeg * qntEspetinhoVeg) + (valSal * qntSal) + (valFarinha * qntFarinha) + (valCarvao * qntCarvao);

  // ate 200 = 5% de desconto; depois passa para 10%
  if (total > 200)
  {
    desconto = total * 0.10;
  }
  else
  {
    desconto = total * 0.05;
  }

  totalComDesconto = total - desconto;

  cout << total << endl;
  cout << desconto << endl;
  cout << totalComDesconto;

  return 0;
}