#include <iostream>
#include <string>

using namespace std;

bool isInfintive(string word)
{
  size_t idx = word.find_last_of("r");
  if (idx == -1)
  {
    return false;
  }
  return word.substr(idx) == "r";
}

bool isGer(string word)
{
  // https://cplusplus.com/reference/string/string/find_last_of/
  size_t idx = word.find_last_of("o");

  if (idx == -1)
  {
    return false;
  }

  return word.substr(idx - 2) == "ndo";
}

int countConsonants(string str)
{
  int consonants = 0;
  for (int i = 0; i < str.length(); i++)
  {
    char c = tolower(str[i]);
    if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
    {
      consonants++;
    }
  }
  return consonants;
}

int getMaxNum(int a, int b, int c)
{
  int maxVal = a;
  if (b > maxVal)
  {
    maxVal = b;
  }
  if (c > maxVal)
  {
    maxVal = c;
  }
  return maxVal;
}

int main()
{
  int qnt, qntInfinitive = 0, qntGer = 0, qntPart = 0;

  cin >> qnt;

  string words[qnt];

  for (int i = 0; i < qnt; i++)
  {
    cin >> words[i];
  }

  int
      biggestWordIdx = 0,
      biggestWordSize = words[0].length(),
      biggestInfinitiveWordSize = 0,
      idxSmallestGerWord = 0,
      smallestGerWordConsonantQnt;

  for (int i = 0; i < qnt; i++)
  {
    if (words[i].length() > biggestWordSize)
    {
      biggestWordIdx = i;
      biggestWordSize = words[i].length();
    }

    if (isInfintive(words[i]))
    {
      qntInfinitive++;
      if (words[i].length() > biggestInfinitiveWordSize)
      {
        biggestInfinitiveWordSize = int(words[i].length());
      }
    }
    else if (isGer(words[i]))
    {
      qntGer++;
      if (words[i].length() < words[idxSmallestGerWord].length())
      {
        idxSmallestGerWord = i;
      }
    }
    else
    {
      qntPart++;
    }
  }

  cout << endl;

  cout << getMaxNum(qntGer, qntInfinitive, qntPart) << endl;
  cout << biggestInfinitiveWordSize << endl;
  cout << countConsonants(words[idxSmallestGerWord]);

  return 0;
}

/*

Example 1:
4
andando
cantar
seguindo
cansado

Example 2:
6
indo
cantar
voltando
calado
vender
caminhar
*/