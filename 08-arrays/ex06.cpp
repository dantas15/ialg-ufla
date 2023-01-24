#include <iostream>
#include <cstring>

using namespace std;

string *getIncreasedArr(string *arr, int &arrSize)
{
  string *newArr = new string[arrSize + 1];

  memcpy(newArr, arr, sizeof(string) * arrSize);
  arrSize += 1;

  delete [] arr;

  return newArr;
}

int main()
{
  int initialArrSize = 0;

  cin >> initialArrSize;

  int arrSize = initialArrSize;

  string *ingredients = new string[arrSize];

  for (int i = 0; i < initialArrSize; i++)
  {
    cin >> ingredients[i];
  }

  cout << endl;

  string newIngredient;

  cin >> newIngredient;

  while (newIngredient != "fim")
  {
    bool alreadyExists = false;

    for (int i = 0; i < initialArrSize; i++)
    {
      if (ingredients[i] == newIngredient)
      {
        alreadyExists = true;
      }
    }

    if (!alreadyExists)
    {
      if ((arrSize-1) == arrSize)
      {
        ingredients = getIncreasedArr(ingredients, arrSize);
      }

      ingredients[arrSize - 1] = newIngredient;
    }

    cin >> newIngredient;
  }

  cout << endl;

  // cout << sizeof(ingredients)/sizeof(ingredients[0]) << endl;
  cout << arrSize;
  for (int i = 0; i < arrSize; i++)
  {
    cout << endl
         << ingredients[i];
  }

  delete[] ingredients;

  return 0;
}

/*
5
pe_de_piranha
pelo_de_minhoca
glitter_rosa
asa_de_aranha
olho_de_pedra

glitter_rosa
dente_de_rosa
piolho_de_peixe
pe_de_piranha
pelo_de_minhoca
bolor_laranja
fim
*/