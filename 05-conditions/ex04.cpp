#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;	

int main () {
	float x, y, res = 0.0;
	int h, quadrante;
	
	cin >> h;
	cin >> x;
	cin >> y;
	
	if (h > 360) {
		h = int(h % 360);
	}
	
	if (h > 0 && h < 90) {
		quadrante = 1;
	} else	if (h > 90 && h < 180) {
		quadrante = 2;
	} else	if (h > 180 && h < 270) {
		quadrante =3;
	} else if (h > 270 && h < 360) {
		quadrante =4;
	} else {	
		quadrante = 0;
	}
	
	cout << endl;
	
	switch (quadrante) {
		case 1:
			res = x + y;
			break;
		case 2:
			res = x * y;
			break;
		case 3:
			res = x / y;
			break;
		case 4:
			res = pow(x, y);
			break;
		default:
			cout << "Quadrante não encontrado :(";
			break;
	}
	
	cout << setprecision(1) << fixed << res;

	return 0;
}