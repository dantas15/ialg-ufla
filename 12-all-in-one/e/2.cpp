#include <iostream>
using namespace std;

string * aumenta(string vetor[],int &tamanho){
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
void busca(fabrica vetor[],replica vex [], string busca,int tamanhoF, int tamanhoR){
	bool encontrouFabrica = false, encontrouReplica = false;
	int i = -1, j = -1;

	while (i<tamanhoF-1 and !encontrouFabrica) {
		i++;
		encontrouFabrica = busca==vetor[i].nomeRepli;
	}
	if (encontrouFabrica){
		while(j<tamanhoR-1 and !encontrouReplica){
			j++;
			encontrouReplica = busca==vex[j].nome;
		}
	}

	if(encontrouFabrica and encontrouReplica){
		cout<<vetor[i].nomeFabri<<" "<<vex[j].montadora<<" "<<vex[j].ano;
	} else{
		cout<<"erro";
	}
	cout << endl;
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
	for(int i=0;i<tamanho;i++) {
		busca(outrov,vetor,v[i],quantiaF, quantiaR);
	}

	delete [] v;
	return 0;
}

/*
Exemplo de entrada

5
Mustang_Boss ford 1970
Marajo_SL Chevrolet 1981
Fusca Volkswagen 1961
DeLorean DMC 1976
F-100 Ford 1976
4
F-100 MotorMax
Fusca Kinsmart
Marajo_SL lkxo
DeLorean Welly
Fusca
Mustang_Boss
F-100
fim

Exemplo de saída
Kinsmart Volkswagen 1961
erro
MotorMax Ford 1957
*/