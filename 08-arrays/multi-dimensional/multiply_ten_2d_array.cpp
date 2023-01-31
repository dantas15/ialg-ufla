#include <iostream>
#include <cstring>

using namespace std;

const int LINES = 4;
const int COLUMNS = 4;

void multiplyElementsByTen (int **arr, int lines, int columns) {
  for (int i = 0; i < lines; i++) {
    for (int j = 0; j < columns; j++) {
      arr[i][j] = arr[i][j] * 10;
    }
  }
}

int main()
{
  int numbers[LINES][COLUMNS] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {2,2,2,2}}; 

  cout << "\n\tBEFORE\n";

  for (int i = 0; i < LINES; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      cout << numbers[i][j] << " ";
    }
    cout << endl;
  }

  multiplyElementsByTen((int **)numbers, LINES, COLUMNS);

  cout << "\n\tAFTER\n";
  
  for (int i = 0; i < LINES; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      cout << numbers[i][j] << " ";
    }
    cout << endl;
  }

  
  return 0;
}