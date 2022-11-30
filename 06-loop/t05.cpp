#include <iostream>
#include <fstream>

using namespace std;

int main() {
	string nomeArquivo;
	int qntValores;
	float valAtual, maior, menor;
	
	cin >> nomeArquivo;
	
	ifstream ler (nomeArquivo);
	
	ler >> qntValores;
	
	for (int i = 0; i < qntValores; i++) {
		ler >> valAtual;
	
		if (i == 0) {
			maior = valAtual;
			menor = valAtual;
		} else {
			if (valAtual > maior) {
				maior = valAtual;
			} else if (valAtual < menor) {
				menor = valAtual;
			}
		}
	}
	
	cout << endl << maior;
	cout << endl << menor;
	

	ler.close();
	return 0;
}