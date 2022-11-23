#include <iostream>
using namespace std;

int main()
{
  char tipo;
  int qntMonstros, qntDias;

  cin >> tipo >> qntMonstros >> qntDias;

  switch (tipo) {
  case 'z':
    cout << 1;
    break;
  case 'm':
    cout << 1;
    break;
  case 'l':
    cout << 2;
    break;
  case 'd':
    cout << 2;
    break;
  case 'h':
    cout << 3;
    break;
  case 's':
    cout << 3;
    break;
  case 'v':
    cout << 4;
    break;
  case 'f':
    cout << 4;
    break;
  }

  if (qntMonstros == 1) {
    cout << 1;
  }
  else if (qntMonstros == 2) {
    cout << 2;
  }
  else if (qntMonstros >= 3) {
    cout << 3;
  }

  if (qntDias == 1 or qntDias == 2) {
    cout << 1;
  }
  else if (qntDias == 3 or qntDias == 4) {
    cout << 2;
  }
  else if (qntDias == 5 or qntDias == 6) {
    cout << 3;
  } else {
    cout << 4;
  }

  return 0;
}