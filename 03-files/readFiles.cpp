#include <fstream>
#include <iostream>
using  namespace std;

int main() {
	string nomeDoArquivo;

	cout << "Digite o nome do arquivo: ";

	cin >> nomeDoArquivo;

	ifstream leitura (nomeDoArquivo);
	
	string palavra1, palavra2, numero;
	leitura >> palavra1;
	leitura >> palavra2;
	leitura >> numero;
	
	cout << palavra1 << " " << palavra2 << " " << palavra2;
}
