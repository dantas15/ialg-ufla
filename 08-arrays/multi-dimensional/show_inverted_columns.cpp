
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
  int arr[2][2] = {{3,4}, {5,6}};

  for (int i = 0; i < 2; i++) {
    for (int j = 1; j >= 0; j--) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

