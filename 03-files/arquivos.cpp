#include <fstream>
#include <iostream>
using namespace std;
int main() {
	// tipo nomeVariavel ("nomearquivo");
	ofstream gravar ("arquivo.txt");

	// gravar conteúdo na variável gravar
	gravar << "teste" << endl;

	gravar << "teste2" << endl;

	int numero;
	cout << "Digite um número" << endl;
	cin >> numero;

	gravar << numero;
	gravar.close();
}
