#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main() {
	//string x1, y1, x2, y2;
	float x1, y1, x2, y2;
	
	ifstream ler ("entrada.txt");
	
	ler >> x1 >> y1 >> x2 >> y2;
	
	cout << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	ler.close();
	
	return 0;
}
