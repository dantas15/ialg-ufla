#include <iostream>

using namespace std;

const int ARR_SIZE = 7;

int partition(int arr[], int low, int high)
{
  int pivot = arr[high]; // get the last element as pivot
  int sortedIndex = low - 1;

  for (int j = low; j < high; j++)
  {
    if (arr[j] < pivot)
    {
      sortedIndex++;
      swap(arr[sortedIndex], arr[j]);
    }
  }

  swap(arr[sortedIndex + 1], arr[high]);
  return sortedIndex + 1;
}

void quicksort(int arr[], int low, int high)
{
  if (low < high)
  {
    int pivot = partition(arr, low, high);

    quicksort(arr, low, pivot - 1);
    quicksort(arr, pivot + 1, high);
  }
}

int main()
{
  int arr[ARR_SIZE] = {3, 7, 8, 4, 6, 2, 5};

  cout << "\n-------------Original array-------------\n";
  for (int i = 0; i < ARR_SIZE; i++)
  {
    cout << arr[i] << " ";
  }

  quicksort(arr, 0, ARR_SIZE - 1);

  cout << "\n-------------Sorted array-------------\n";
  for (int i = 0; i < ARR_SIZE; i++)
  {
    cout << arr[i] << " ";
  }

  return EXIT_SUCCESS;
}