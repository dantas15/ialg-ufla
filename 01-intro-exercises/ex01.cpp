#include <iostream>
using namespace std;

int main()
{
  int num, lat, lon, resto, pri, seg, ter, qua;

  cin >> num;

  pri = num / 1000;

  resto = num % 1000;

  seg = resto / 100;
  resto = resto % 100;

  ter = resto / 10;
  qua = resto % 10;

  lat = pri + qua;
  lon = seg + ter;

  cout << lat << endl << lon;

  return 0;
}
