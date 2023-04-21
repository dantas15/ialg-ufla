#include <iostream>
using namespace std;

float * aumentar(float vetor[], int &tamanho){
	float * novo = new float[tamanho+3];
	copy(vetor,vetor+tamanho,novo);
	tamanho+=3;
	delete [] vetor;
	return novo;
}
int main(){
	int tamanhoA=5,tamanhoB=0, i=0, teste=0,quantidade=0;
	float inserir=1,soma;
	float * vetorA = new float [tamanhoA];
	while(inserir!=0 or inserir != 0.0){
		cin>>inserir;
		if(tamanhoA < i)
			vetorA=aumentar(vetorA,tamanhoA);
		vetorA[i]=inserir;
		i++;
	}
	float maior=vetorA[1];
	cin>>tamanhoB;
	int vetorB[tamanhoB];
	for(int j=0;j<tamanhoB;j++){
		cin>>teste;
		if(teste>tamanhoA){
			cout<<"Valor não pertecente ao tamanho do vetor A"<<endl;
		}else{
			vetorB[i]=teste;
		}
	}
	for(int h=0;h<tamanhoB;h++){
		soma+=vetorA[vetorB[h]];
		if(vetorA[vetorB[h]] > maior){
			maior=vetorA[vetorB[h]];
		}
		if(vetorA[vetorB[h]] == maior){
			quantidade++;
		}
	}
	cout<<soma<<endl<<maior<<endl<<sizeof(vetorA);
}
