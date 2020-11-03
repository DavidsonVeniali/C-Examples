#include <stdio.h>
#include <stdlib.h>
#define N 5

void intercalar (int *vetor, int inicio, int meio, int fim);
void mergeSort (int *vetor, int inicio, int fim);

int main (int argc, char** argv) {
    int vet[N], i, retorno;

    for (i=0; i<N; i++){
        printf("\n Informe um numero: ");
        scanf("%d", &vet[i]);
    }
    
    printf("\n");

    mergeSort (vet,0,N-1);

    for (i=0; i<N; i++){
        printf(" %d ", vet[i]);
    }

    printf("\n");

    return (EXIT_SUCCESS);
}

void mergeSort (int *vetor, int inicio, int fim){
    int meio;

    if (inicio < fim) {
        meio = (inicio + fim) / 2;
        mergeSort(vetor, inicio, meio);
        mergeSort(vetor, meio + 1, fim);
        intercalar(vetor, inicio, fim, meio);
    }

}

void intercalar (int *vetor, int inicio, int fim, int meio){
    int i = inicio;
    int j = meio + 1;
    int k = 0;
    int Tmp[N];

    while ((i <= meio) || (j <= fim)){
        if ((i == meio+1) || ((vetor[j] < vetor[i]) && (j != fim + 1))){
            Tmp[k] = vetor [j];
            j = j + 1;
            k = k + 1;
        }
        else {
            Tmp[k] = vetor[i];
            i = i + 1;
            k = k + 1;
        }
    }

    for (i = inicio; i <= fim; i++){
        vetor[i] = Tmp[i-inicio];
    }

}
