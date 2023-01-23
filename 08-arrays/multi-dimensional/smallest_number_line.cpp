#include <iostream>

using namespace std;

const int ARR_LINE = 2;
const int ARR_COLUMN = 2;

int main()
{
  int arr[ARR_LINE][ARR_COLUMN] = {{3,6}, {5,4}};

  int menorNum, menorLinha;

  for (int i = 0; i < ARR_LINE; i++) {
    for (int j = 0; j < ARR_COLUMN; j++) {
      if (i == 0 && j == 0) {
        menorNum = arr[i][j];
        menorLinha = i;
      }

      if(arr[i][j] < menorNum) {
        menorNum = arr[i][j];
        menorLinha = i;
      }
    }
  }

  for (int j = 0; j < ARR_COLUMN; j++) {
    cout << arr[menorLinha][j];
  }

  return 0;
}

