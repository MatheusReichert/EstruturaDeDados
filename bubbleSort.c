//Implementado por Matheus Ernan Reichert
#include <stdio.h>

void troca(int *valor1, int *valor2){
        int aux;
        aux = *valor1;
        *valor1 = *valor2;          
        *valor2 = aux;
}

void bubbleSort(int *vetor, int tamanho)
{
    for (int passagem = 0; passagem < tamanho - 1; passagem++)
    {
        for (int i = 0; i < tamanho - 1 - passagem; i++)
        {

            if (vetor[i] > vetor[i + 1])
            {
                troca(&vetor[i], &vetor[i + 1]);
            }
        }
    }
}

int main()
{

    int vetor[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(vetor, 10);
    for (int i = 0; i < 10; i++)
    {

        printf("%i\n", vetor[i]);
    }

    return 0;
}
