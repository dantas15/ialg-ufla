#include <iostream>

using namespace std;

const int ARR_SIZE = 7;


// this is used just to show the result in between the recursion stuff
void displayArr(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}
void displayInfo(int arr[], int low, int high, int pivot) {
  displayArr(arr, ARR_SIZE);
  cout << "\nlow:" << low;
  cout << "\nhigh:" << high;  
  cout << "\npivot pos:" << pivot;
}

int partition(int arr[], int low, int high) {
  int pivot = arr[high];
  int sortedIndex = low - 1;

  for (int j = low; j < high; j++) {
    if(arr[j] < pivot)
    {
      sortedIndex++;
      swap(arr[sortedIndex], arr[j]);
    }
  }

  swap(arr[sortedIndex + 1], arr[high]);
  return sortedIndex + 1;
}

void quicksort(int arr[], int low, int high) {
  if (low < high) {
    cout << "\n------------------\narr before partition func: ";
    displayArr(arr, ARR_SIZE);

    int pivot = partition(arr, low, high);

    cout << "\narr after partition func: ";
    displayInfo(arr, low, high, pivot);

    quicksort(arr, low, pivot - 1);
    quicksort(arr, pivot + 1, high);
  } else {
    cout << "\n------------------\n";
    cout << "\nDid not enter => " << low << " < " << high;
  }
}

int main () {
  int arr[ARR_SIZE] = { 3, 7, 8, 4, 6, 2, 5};

  quicksort(arr, 0, ARR_SIZE - 1);

  cout << "\n-------------Sorted array-------------\n";
  displayArr(arr, ARR_SIZE);

  return EXIT_SUCCESS;
}