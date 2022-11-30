#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string nomeArquivo;
	int qntCaracteres = 0;
	char arquivoChar;
	
	cin >> nomeArquivo;
	
	ifstream ler (nomeArquivo);
	
	while (ler >> arquivoChar) {
		qntCaracteres++;
	}
	
	cout << qntCaracteres;

	ler.close();
	return 0;
}