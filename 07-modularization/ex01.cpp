#include <iostream>
using namespace std;

float Media(float n1, float n2) {
  return (n1 + n2) / 2.0;
}

int main() {
  float v1, v2;
  cin >> v1 >> v2;
  cout << Media(v1, v2);
  return 0;
}