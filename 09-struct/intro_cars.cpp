#include <iostream>

using namespace std;

struct carro {
	string cor;
	int ano;
	string marca;
	bool ar;
};

int main()
{
  carro carros[2];

  for (int i = 0; i < 2; i++) {
    cin >> carros[i].cor;
    cin >> carros[i].ano;
    cin >> carros[i].marca;
    cin >> carros[i].ar;
  }


  // Carro e índice do carro mais antigo
  int idxCarroMaisAntigo = 0, anoMaisAntigo = carros[0].ano;

  for (int i = 0; i < 2; i++) {
    if (anoMaisAntigo > carros[i].ano) {
      anoMaisAntigo = carros[i].ano;
      idxCarroMaisAntigo = i;
    }
  }

  return 0;
}

