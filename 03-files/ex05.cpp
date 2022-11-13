#include <iostream>
#include <fstream>
#include <iomanip>
//using namespace ;
int main() {
	float n1, n2, n3, p1, p2, p3;
	
	std::ifstream ler ("notas.txt");
	std::ofstream gravar ("final.txt");
	
	ler >> n1 >> p1;
	ler >> n2 >> p2;
	ler >> n3 >> p3;
	
	gravar << std::fixed << std::setprecision(2) << (n1 * p1 + n2 * p2 + n3 * p3) / ( p1 + p2 + p3);
	
	ler.close();
	gravar.close();
	
	return 0;
}

/*
50 30
60 20
70 50

62
*/
