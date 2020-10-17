#include <stdio.h>
#include <stdlib.h>
#define N 5

int buscaBinaria (int *vetor, int k, int inicio, int fim);

int main (int argc, char** argv) {
    int vet[N], i, chave, retorno;

    for (i=0; i<N; i++){
        printf("\n Informe um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\n Informe a chave: ");
    scanf("%d", &chave);

    retorno = buscaBinaria(vet, chave, 0, N-1);

    if (retorno == -1)
        printf("\nRegistro nao encontrado!\n");
    else{
        printf("\nRegistro encontrado: %d \n", retorno);
    }
    

    return (EXIT_SUCCESS);
}

int buscaBinaria (int *vetor, int k, int inicio, int fim){
    int meio;

    meio = (inicio + fim) / 2;

    if (inicio > fim) {
        return -1;
    }
    else if (vetor[meio] == k){
        return vetor[meio];
    }
    else if (vetor[meio] > k) {
        return buscaBinaria(vetor, k, inicio, meio -1);
    }
    else{
        return buscaBinaria(vetor, k, meio +1, fim);
    }
}