#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define N 5

void sortBolha (int *V);

int main (int argc, char** argv) {
    int vetor[N], i;

    for (i=0; i<N; i++){
        printf("Informe um numero: \n");
        scanf("%d", &vetor[i]);
    }

    sortBolha(vetor);

    for (i=0; i<N; i++){
        printf("Numero: %d \n", vetor[i]);
    }
    return (EXIT_SUCCESS);
}

void sortBolha (int *V){
    bool mudou = true;
    int indicie = N;
    int n = N;
    int i, j, auxiliar;

    while (mudou == true) {
        j = 1;
        mudou = false;
        while (j < N){
            if (V[j-1] > V[j]){
                auxiliar = V[j-1];
                V[j-1] = V[j];
                V[j] = auxiliar;
                mudou = true;
            }
            indicie = j;
            j = j + 1;
        }
    }
    n = indicie;
}