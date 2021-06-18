//Implementado por Matheus Ernan Reichert
#include<stdio.h>

int buscaBinaria(int *vetor,int tamanhoVetor, int valorBuscado){
	int posicao = -1;
	int baixo = 0;
	int meio;
	int alto = tamanhoVetor;
	
	while( baixo <= alto){
		meio = (baixo + alto)/2;
	if(valorBuscado == vetor[meio]){
		posicao = meio;
		break;
	}
	if(valorBuscado < vetor[meio]){
		alto = meio -1;
	}
	else{
		baixo = meio +1;
	}
	}
	return posicao;
}


int main(){
	int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("Vetor [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]\n");
	printf("Posicao do valor 10 no vetor: %i\n", buscaBinaria( vetor, 9, 10));
	printf("Posicao do valor 1 no vetor: %i\n", buscaBinaria(vetor, 9, 1));
	printf("Posicao do valor 14 no vetor: %i (Como nao tem imprime -1, preguica de por um switch case ou if))\n",
		buscaBinaria(vetor, 9, 14));
	return 0;
}
