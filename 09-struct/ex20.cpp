#include <iostream>
#include <cstring>

using namespace std;

struct Vilao
{
  string nome;
  string alvo;
};

struct Plano
{
  string nomePlano;
  string nomeVilao;
  int prejuizoCausado;
};

struct PrejuizoPorPlano
{
  string nomePlano;
  string prejuizoTotal;
};

string *aumentarString(string *antigo, int &tamanho)
{
  string *novo = new string[tamanho + 1];

  memcpy(novo, antigo, sizeof(string) * tamanho);
  tamanho++;

  delete[] antigo;

  return novo;
}

PrejuizoPorPlano *aumentarPrejuizoPorPlano(PrejuizoPorPlano *antigo, int &size)
{
  PrejuizoPorPlano *novo = new PrejuizoPorPlano[size + 1];

  memcpy(novo, antigo, size * sizeof(PrejuizoPorPlano));
  size++;

  delete[] antigo;
  
  return novo;
}

int main() {
  int qntViloes;

  cin >> qntViloes;

  Vilao *viloes = new Vilao [qntViloes];

  for (int i = 0; i < qntViloes; i++) {
    cin >> viloes[i].nome >> viloes[i].alvo;
  }

  int qntPlanos;

  cin >> qntPlanos;

  Plano *planos = new Plano [qntPlanos];

  for (int i = 0; i < qntPlanos; i++) {
    cin >> planos[i].nomePlano >> planos[i].nomeVilao >> planos[i].prejuizoCausado;
  }

  string alvoEscolhido;

  cin >> alvoEscolhido;
  
  int qntViloesQueRoubaramAlvo = 0;
  string *viloesQueRoubaramAlvo = new string [qntViloesQueRoubaramAlvo];

  // Percorrendo viloes para salvar os nomes que roubaram do alvo
  for (int i = 0; i < qntViloes; i++) {
    if(viloes[i].alvo == alvoEscolhido) {
      viloesQueRoubaramAlvo = aumentarString(viloesQueRoubaramAlvo, qntViloesQueRoubaramAlvo);
      viloesQueRoubaramAlvo[qntViloesQueRoubaramAlvo-1] = viloes[i].nome;
    }
  }

  // // Testando se os nomes estao corretos
  // for (int i = 0; i < qntViloesQueRoubaramAlvo; i++) {
  //   cout << endl << viloesQueRoubaramAlvo[i];
  // }
  // cout << endl << qntViloesQueRoubaramAlvo;

  // Pegando os planos com os nomes

  return 0;  
}
