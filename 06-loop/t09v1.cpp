#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
	string nomeArquivo, valorArquivo;
	int qntCaracteres = 0, totalCaracteres, currChar;
	
	cin >> nomeArquivo;
	
	ifstream ler (nomeArquivo);
	
	stringstream strStream;
    strStream << ler.rdbuf(); // ler o arquivo
    valorArquivo = strStream.str(); // str tem o conteúdo do arquivo
	
	totalCaracteres = valorArquivo.length();
	
	for (int i = 0; i < totalCaracteres; i++) {
		currChar = int(valorArquivo[i]);
		if ((currChar > 64 && currChar < 91) || (currChar > 96 && currChar < 123)) {
			qntCaracteres++;
		}
	}
	
	cout << qntCaracteres;
	
	return 0;
}