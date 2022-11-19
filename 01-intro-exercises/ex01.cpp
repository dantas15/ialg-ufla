#include <iostream>
using namespace std;

int main() {
  int num, lat, lon, resto, pri, seg, ter, qua;

  cin >> num;
  
  pri = num / 1000;
  
  resto = num % 1000;

  cout << resto << endl << pri; 

  return 0;
}