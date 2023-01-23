#include <iostream>
#include <cstring>

using namespace std;

const int ARR_DEFAULT_SIZE = 5;

int* getIncreasedArrSize (int *arr, int &arrSize) {
  int* newArr = new int [arrSize+ARR_DEFAULT_SIZE];

  memcpy (newArr, arr, sizeof(int)*arrSize);
  arrSize += ARR_DEFAULT_SIZE;

  return newArr;
}

int main()
{
  int inputNum, timesRepeated = 0, arrSize = ARR_DEFAULT_SIZE;

  int* numbers = new int[arrSize];

  cin >> inputNum;

  while (inputNum > 0) {
    if(timesRepeated == arrSize) {
      numbers = getIncreasedArrSize(numbers, arrSize);
    }

    numbers[timesRepeated] = inputNum;

    timesRepeated++;
    cin >> inputNum;
  }

  cout << endl;

  for (int i = 0; i < arrSize; i++) {
    if (numbers[i] > 0) {
      if (i != 0) {
        cout << " ";
      }
      cout << numbers[i];
    }
  }

  cout << endl << arrSize << endl;

  cout << arrSize / ARR_DEFAULT_SIZE - 1;

  delete [] numbers;

  return 0;
}