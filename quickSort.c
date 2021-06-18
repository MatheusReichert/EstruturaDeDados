//Implementado por Matheus Ernan Reichert
#include <stdio.h>

void troca(int *valor1, int *valor2){
        int aux;
        aux = *valor1;
        *valor1 = *valor2;          
        *valor2 = aux;
}

void quickSort(int vetor[], int inicio, int fim)
{
    int Centro;
    int i = inicio;
    int j = fim - 1;

    Centro = vetor[(inicio + fim) / 2];
    while (i <= j)
    {
        while (vetor[i] < Centro && i < fim)
        {
            i++;
        }
        while (vetor[j] > Centro && j > inicio)
        {
            j--;
        }
        if (i <= j)
        {
            troca(&vetor[i], &vetor[j]);
            j--;
            i++;
        }
    }
    if (j > inicio)
        quickSort(vetor, inicio, j + 1);
    if (i < fim)
        quickSort(vetor, i, fim);
}

int main()
{

    int vetor[] = {10, 5, 8, 7, 6, 9, 1, 2, 3, 4};

    quickSort(vetor, 0, 10);
    
    for (int i = 0; i < 10; i++)
    {

        printf("%i\n", vetor[i]);
    }

    return 0;
}
