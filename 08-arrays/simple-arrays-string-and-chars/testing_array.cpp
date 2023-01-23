#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  string tstring = "Hello mundo";
  // char tchar [5] = { 'm', 'u', 'n', 'd', 'o'};
  char tchar[6] = { 'w', 'o', 'r', ' ', 'l', 'd'};

  cout << "\n";
  for (int i = 0; i < tstring.size(); i++) // or tstring.size();
  {
    cout << tstring[i];
  }

  cout << "\n";
  for (int i = 0; i < strlen(tchar); i++)
  {
    cout << tchar[i];
  }
}