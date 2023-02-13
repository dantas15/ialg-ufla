#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

struct coordinate {
  int line;
  int column;
};
struct ship {
  int identifier;
  coordinate* positions;
  int positionsQuantity;
};

int* increaseIntArr (int *arr, int &size) {
  int* newArr = new int [size+1];

  memcpy (newArr, arr, sizeof(int)*size);
  size +=1;
  return newArr;
}

coordinate* increaseCoordinateArr (coordinate *arr, int &size) {
  coordinate* newArr = new coordinate [size+1];

  memcpy (newArr, arr, sizeof(coordinate)*size);
  size +=1;
  return newArr;
}

ship* increaseShipArr (ship *arr, int &size) {
  ship* newArr = new ship [size+1];

  memcpy (newArr, arr, sizeof(ship)*size);
  size +=1;
  return newArr;
}

void createOrUpdateCoordinate(int identifier, int line, int column) {

}

int main () {
  ifstream read ("BatalhaNaval.txt");
  
  int size = 0;

  read >> size;

  int board[size][size];

  int timesIdentifiers = 0;
  ship* identifiers = new ship [1];



  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      read >> board[i][j];

      int curr = board[i][j];

      if (curr > 0) {}
    }
  }

  int shotsQuantity = 0;

  cin >> shotsQuantity;

  // int shots[shotsQuantity][shotsQuantity];



  read.close();
  return 0;
}