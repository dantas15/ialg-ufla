#include <iostream>
using namespace std;

int main () {
	float a, b, c, d, maior, seg;

	cin >> a;
	maior = a;
	seg = a;

	cin >> b;
	if (b > maior) {
		maior = b;
		seg = a;
	} else {
		seg = b;
	}

	cin >> c;
	if (c > maior) {
		seg = maior;
		maior = c;
	} else if (c > seg) {
		seg = c;
	}
	
	cin >> d;
	if (d > maior) {
		seg = maior;
		maior = d;
	} else if (d > seg) {
		seg = d;
	}

	 cout << endl << maior << endl << seg;

	return 0;
}