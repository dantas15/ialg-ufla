#include <iostream>

using namespace std;

int main () {
  int a1[3][3], a2[3][3], resultArr[3][3];

  // input a1
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a1[i][j];
    }
  }

  // input a2
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a2[i][j];
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      resultArr[i][j] = 0;
      for (int r = 0; r < 3; r++) {
        resultArr[i][j] += a1[i][r] * a2[r][j];
      }
    }
  }

  cout << endl;

  // mostrando resultArr
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << resultArr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}