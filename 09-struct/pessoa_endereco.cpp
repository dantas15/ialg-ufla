#include <iostream>

using namespace std;

struct endereco {
	string rua;
	int numero;
	string bairro;
	string cep;
	string cidade;
};

struct pessoa {
	string nome;
	string cpf;
	string estado_civil;
	string sexo;
	endereco endereco_pessoa;	
};

int main () {
  pessoa pessoas[5];

  for (int i = 0; i < 1; i++) {
    cout << i << endl;
  }

  return 0;
}