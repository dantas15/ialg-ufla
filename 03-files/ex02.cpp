#include <iostream>
#include <fstream>
using namespace std;
int main() {
	
	string nomeArquivo, palavra;
	
	cin >> nomeArquivo;
	cin >> palavra;
	
	ofstream gravar (nomeArquivo);
	
	gravar << palavra;
	
	gravar.close();
	
	return 0;
}
