#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  string fileName, movie1, movie2;
  float m11, m12, m21, m22;
  
  cin >> fileName;

  ifstream readFile(fileName);

  readFile >> movie1 >> m11 >> m12;
  readFile >> movie2 >> m21 >> m22;

  cout << "\n " << movie1 << ": " << m11 + m12;
  cout << "\n " << movie2 << ": " << m21 + m22;

  return 0;
}