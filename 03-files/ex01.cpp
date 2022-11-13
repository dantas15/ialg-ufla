#include <iostream>
#include <fstream>
using namespace std;
int main() {
	string nomeDoArquivo, palavra;
	cin >> nomeDoArquivo;
	
	ifstream arquivo (nomeDoArquivo);
	
	// pegando o conteúdo do arquivo e colocando na variável
	
	arquivo >> palavra;
	cout << palavra;
	arquivo.close();
	
	return 0;
}
