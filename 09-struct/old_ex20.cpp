#include <iostream>
#include <cstring>

using namespace std;

struct Vilao {
  string nome;
  string alvo;
};

struct Plano {
  string nomePlano;
  string nomeVilao;
  int prejuizoCausado;
};

struct Relatorio {
  string plano;
  int prejuizoTotal;
};

string* aumentar (string *antigo, int &tamanho) {
  string* novo = new string [tamanho+1];

  memcpy (novo, antigo, sizeof(string)*tamanho);
  tamanho += 1;

  delete [] antigo;

  return novo;
}

void aumentarRelatorio(Relatorio *&original, int &size) {
  int newSize = size + 1;
  Relatorio *tempArray = new Relatorio[newSize];

  memcpy(tempArray, original, size * sizeof(Relatorio));

  delete[] original;
  original = tempArray;

  size = newSize;
}

void mostraResultadoSeNaoExistePrejuizo() {
  cout << endl;
  cout << -1;
}

int main () {
  int qntViloes, qntPlanos, prejuizoTotal = 0;
  string nomeAlvoParaBusca;

  int qntNomesEncontrados = 0;
  int qntNomesViloesParaBusca = 1;
  string *nomesViloesParaBusca = new string[qntNomesViloesParaBusca];

  int qntRelatoriosEncontrados = 0;
  int qntRelatorios = 1;
  Relatorio* relatorioDePlanos = new Relatorio[qntRelatorios];

  cin >> qntViloes;
  Vilao viloes [qntViloes];


  for (int i = 0; i < qntViloes; i++) {
    cin >> viloes[i].nome >> viloes[i].alvo;
  }

  cin >> qntPlanos;

  Plano planos[qntPlanos];

  for (int i = 0; i < qntPlanos; i++) {
    cin >> planos[i].nomePlano >> planos[i].nomeVilao >> planos[i].prejuizoCausado;
  }

  cin >> nomeAlvoParaBusca;

  
  for (int i = 0; i < qntViloes; i++) {
    if(viloes[i].alvo == nomeAlvoParaBusca) {
      int STRING_TESTE = qntNomesViloesParaBusca;
        if(qntNomesEncontrados == qntNomesViloesParaBusca) {
          nomesViloesParaBusca = aumentar(nomesViloesParaBusca, qntNomesViloesParaBusca);
        }
        nomesViloesParaBusca[qntNomesViloesParaBusca-1] = viloes[i].nome;
        qntNomesEncontrados++;
    }
  }

  if(qntNomesViloesParaBusca > 0) {
    for (int i = 0; i < qntPlanos; i++) {
      for(int j = 0; j < qntNomesViloesParaBusca; j++) {
        if(planos[i].nomeVilao == nomesViloesParaBusca[j]) {
          bool planoJaExiste = false;
          int k = 0;
          while(k < qntRelatorios && !planoJaExiste) {
            if (relatorioDePlanos[k].plano == planos[i].nomePlano) {
              relatorioDePlanos[k].prejuizoTotal += planos[i].prejuizoCausado;
              planoJaExiste = true;
            }
            k++;
          }
          if(!planoJaExiste) {
            if(qntRelatoriosEncontrados == qntRelatorios) {
              aumentarRelatorio(relatorioDePlanos, qntRelatorios);
            }           
            relatorioDePlanos[qntRelatorios-1].plano = planos[i].nomePlano;
            relatorioDePlanos[qntRelatorios-1].prejuizoTotal = planos[i].prejuizoCausado;
            qntRelatoriosEncontrados++;
          }
          prejuizoTotal += planos[i].prejuizoCausado;
        }
      }
    }

    if(qntRelatoriosEncontrados > 0) {
      for (int i = 0; i < qntRelatorios; i++) {
        cout << endl;
        cout << relatorioDePlanos[i].plano << " " << relatorioDePlanos[i].prejuizoTotal;
      }
    } else {
      mostraResultadoSeNaoExistePrejuizo();
    }
    
  } else {
    mostraResultadoSeNaoExistePrejuizo();
  }
  
  delete[] nomesViloesParaBusca;
  delete[] relatorioDePlanos;

  return 0;
}