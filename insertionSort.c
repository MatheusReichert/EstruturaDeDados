//Implementado por Matheus Ernan Reichert
#include <stdio.h>

void insertionSort(int *vetor, int tamanho)
{
    int chave , iteracaoDecrescente;
    for (int iteracaoCrescente = 1; iteracaoCrescente < tamanho; iteracaoCrescente++)
    {
        chave = vetor[iteracaoCrescente];
        for(iteracaoDecrescente = iteracaoCrescente - 1; iteracaoDecrescente >= 0 &&
          chave < vetor[iteracaoDecrescente]; iteracaoDecrescente--)
        {
            vetor[iteracaoDecrescente+1] = vetor[iteracaoDecrescente];
        }
        vetor[iteracaoDecrescente+1] = chave;
    }
}

int main()
{

    int vetor[] = {10, 5, 8, 7, 6, 9, 1, 2, 3, 4};
    insertionSort(vetor, 10);
    for (int i = 0; i < 10; i++)
    {

        printf("%i\n", vetor[i]);
    }

    return 0;
}
