#include <iostream>
#include <cstring>

using namespace std;

const int LINES = 4;
const int COLUMNS = 4;

int main()
{
  // Allocating array
  int **numbers;
  numbers = new int *[LINES];
  for (int i = 0; i < LINES; i++)
  {
    numbers[i] = new int[COLUMNS];
  }

  // Input numbers from user
  for (int i = 0; i < LINES; i++) {
    for (int j = 0; j < COLUMNS; j++) {
      cin >> numbers[i][j];
    }
  }
  
  // Output
  for (int i = 0; i < LINES; i++) {
    cout << endl;
    for (int j = 0; j < COLUMNS; j++) {
      cout << numbers[i][j] << " ";
    }
  }
  cout << endl;

  // Deallocate array
  for (int i = 0; i < LINES; i++)
  {
    delete [] numbers[i];
  }
  delete [] numbers;

  return 0;
}
