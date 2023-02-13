#include <iostream>

using namespace std;

// this can only be implemented in a sorted array
int binarySearch(int arr[], int start, int end, int numberToBeFound)
{
    if (start <= end)
    {
        int middle = (start + end) / 2;
        if (numberToBeFound > arr[middle])
        {
            return binarySearch(arr, middle + 1, end, numberToBeFound);
        }
        else if (numberToBeFound < arr[middle])
        {
            return binarySearch(arr, start, middle - 1, numberToBeFound);
        }
        else
        {
            return middle;
        }
    }
    return -1;
}

int main()
{
    int numberToBeFound, lines = 10;

    int arr[lines];

    // os elementos do vetor devem ser
    // fornecidos em ordem crescente
    for (int i = 0; i < lines; i++)
    {
        cin >> arr[i];
    }
    cin >> numberToBeFound;

    cout << binarySearch(arr, 0, lines - 1, numberToBeFound) << endl;
    return EXIT_SUCCESS;
}
