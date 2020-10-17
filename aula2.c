#include <stdio.h>
#include <stdlib.h>
#define N 5

int buscaSequencial (int *vetor, int k);

int main (int argc, char** argv) {
    int vet [N+1], i, chave, retorno;

    for (i=0; i<N; i++){
        printf("\n Informe um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\n Informe a chave: ");
    scanf("%d", &chave);

    retorno = buscaSequencial(vet,chave);

    if (retorno == -1)
        printf("\nSentinela encontrado");
    else{
        printf("Registro encontrado: %d \n");
    }
    

    return (EXIT_SUCCESS);
}

int buscaSequencial (int *vetor, int k){
    int i;
    vetor[N] = k;
    for (i=0; k!=vetor[i]; i++);
    if (i < N) {
        return vetor[i];
    }
    else{
        return -1;
    }
}