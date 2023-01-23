#include <iostream>

using namespace std;

const int LINES = 3;
const int COLUMNS = 4;
const int TOTAL_CELLS = LINES * COLUMNS;

int main()
{
  int numbers[LINES][COLUMNS] = {
    {1, 2,  3,  4},
    {5, 6,  7,  8},
    {9, 10, 11, 12}
  };  
  int* ptr = &numbers[0][0];

  for(int i = 0; i < TOTAL_CELLS; i++) {
    cout << *(ptr + i) << " ";
  }
  
  return 0;
}
