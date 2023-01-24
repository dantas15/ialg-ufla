#include <iostream>
#include <cstring>

using namespace std;

int *getIncreasedSizeArray(int *arr, int &size)
{
  int *novo = new int[size + 1];

  memcpy(novo, arr, sizeof(int) * size);
  size += 1;
  delete[] arr;

  return novo;
}

bool intExistsInArray(int *arr, int t, int numToSearch)
{
  bool exists = false;
  int i = 0;
  while (i < t && !exists)
  {
    if (arr[i] == numToSearch)
    {
      exists = true;
    }
    i++;
  }

  return exists;
}

int main()
{
  int numInput, sizeInput, arrSize;

  cin >> sizeInput;

  arrSize = sizeInput;
  int *numbers = new int[arrSize];

  // B
  for (int i = 0; i < sizeInput; i++)
  {
    cin >> numbers[i];
  }

  cin >> sizeInput;

  int currIdx = arrSize;

  // B
  for (int i = 0; i < sizeInput; i++)
  {
    cin >> numInput;

    bool nExiste = intExistsInArray(numbers, arrSize, numInput);

    if (!nExiste)
    {
      if (currIdx == arrSize) {
        numbers = getIncreasedSizeArray(numbers, arrSize);
      }
      numbers[currIdx] = numInput;
      currIdx++;
    }
  }

  // Sort
  for (int i = 0; i < arrSize; i++)
  {
    for (int j = i + 1; j < arrSize; j++)
    {
      if (numbers[i] > numbers[j])
      {
        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
      }
    }
  }

  cout << endl;

  for (int i = 0; i < arrSize; i++)
  {
    cout << numbers[i] << " ";
  }

  delete[] numbers;

  return 0;
}