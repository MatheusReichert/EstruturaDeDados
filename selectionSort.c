//Implementado por Matheus Ernan Reichert
#include <stdio.h>

void troca(int *valor1, int *valor2){
        int *aux;
        *aux = *valor1;
        *valor1 = *valor2;          
        *valor2 = *aux;
}

void selectionSort(int *vetor, int tamanho)
{
    int posicaoDoMenor;
    for (int passagem = 0; passagem < tamanho - 1; passagem++)
    {
        posicaoDoMenor = passagem;
        for (int i = passagem ; i <  tamanho ; i++)
        {

            if (vetor[posicaoDoMenor] > vetor[i])
            {
                posicaoDoMenor = i;
            }
        }
        troca(&vetor[posicaoDoMenor], &vetor[passagem]);
    }
}

int main()
{

    int vetor[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionSort(vetor, 10);
    for (int i = 0; i < 10; i++)
    {

        printf("%i\n", vetor[i]);
    }

    return 0;
}
