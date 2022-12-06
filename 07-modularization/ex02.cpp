#include <iostream>

using namespace std;

void imprimeParOuImparAteZero(int num, int &qntRef)
{
  cout << endl;

  if (num <= 0)
  {
    cout << num;
    return;
  }

  cout << num;

  while (num > 1)
  {
    if (num % 2 == 0)
    {
      num /= 2;
    }
    else
    {
      num = 3 * num + 1;
    }

    qntRef++;

    cout << " " << num;
  }
}

int main()
{
  int n, qntRef = 0;

  cin >> n;

  imprimeParOuImparAteZero(n, qntRef);

  cout << endl
       << qntRef;

  return 0;
}