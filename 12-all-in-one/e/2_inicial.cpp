#include <iostream>
using namespace std;

string * aumenta(string *vetor,int &tamanho){
	string * novo = new string[tamanho+1];
	copy(vetor,vetor+tamanho,novo);
	tamanho++;
	delete [] vetor;
	return novo;
}

struct fabrica{
	string nomeRepli;
	string nomeFabri;
};

struct replica{
	string nome;
	string montadora;
	int ano;
};
void busca(fabrica vetor[],replica vex[], string busca,int tamanhoF, int tamanhoR){
	for(int i=0;i<tamanhoF;i++){
		for(int j=0;j<tamanhoR;j++){
			if(busca==vetor[i].nomeRepli and busca == vex[j].nome){
				cout<<vetor[i].nomeFabri<<" "<<vex[j].montadora<<" "<<vex[j].ano;
			}else{
				cout<<"erro";
			}
		}
	}		
}

int main(){
	int quantiaR=0, quantiaF=0,tamanho=0;
	string teste="iniciando";
	string * v = new string[tamanho];
	cin>>quantiaR;
	replica vetor[quantiaR];
	for(int i=0;i<quantiaR;i++){
		cin>>vetor[i].nome;
		cin>>vetor[i].montadora;
		cin>>vetor[i].ano;
	}
	cin>>quantiaF;
	fabrica outrov[quantiaF];
	for(int i=0;i<quantiaF;i++){
		cin>>outrov[i].nomeRepli;
		cin>>outrov[i].nomeFabri;
	}
	int j=0;
  cin>>teste;
	while(teste != "fim"){
    v=aumenta(v,tamanho);
		v[j]=teste;
    j++;
    cin>>teste;
	}

	for(int i=0;i<tamanho;i++){
		busca(outrov,vetor,v[i],quantiaF, quantiaR);
	}

  delete [] v;
  return 0;
}
