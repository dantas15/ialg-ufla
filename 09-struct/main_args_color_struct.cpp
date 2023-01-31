#include <iostream>

using namespace std;

struct carro {
	string cor;
	int ano;
	string marca;
	bool ar;
};

int totalDeCarrosComCorEspecifica(carro* carros, int size, string cor) {
  int quantidade = 0;

  for (int i = 0; i < size; i++) {
    if (carros[i].cor == cor) {
      quantidade++;
    }
  }
}

int totalDeCarrosComArDesde2010(carro* carros, int size) {
  int quantidade = 0;

  for (int i = 0; i < size; i++) {
    if (carros[i].ar && carros[i].ano >= 2010) {
      quantidade++;
    }
  }
}

int main(int argc, char* argv[])
{
  string corSelecionada = argv[1];

  carro carros[2];

  for (int i = 0; i < 2; i++) {
    cin >> carros[i].cor;
    cin >> carros[i].ano;
    cin >> carros[i].marca;
    cin >> carros[i].ar;
  }

  int qntCarrosComCorEspecificada = totalDeCarrosComCorEspecifica(carros, 2, corSelecionada);

  cout << endl << qntCarrosComCorEspecificada << endl;

  return 0;
}

