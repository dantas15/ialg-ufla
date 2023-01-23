#include <iostream>

using namespace std;

int main()
{
  int arr[2][2] = {{3,6}, {5,4}};

  int maior;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      if (i == 0 && j == 0) {
        maior = arr[i][j];
      }

      if(arr[i][j] > maior) {
        maior = arr[i][j];
      }   
    }
  }
  cout << maior;

  return 0;
}

