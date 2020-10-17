#include <stdio.h>
#include <stdlib.h>
#define N 5

int buscaSequencial (int *vetor, int k);

int main (int argc, char** argv) {
    int vet [N], i, chave, retorno;

    for (i=0; i<N; i++){
        printf("\n Informe um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\n Informe a chave: ");
    scanf("%d", &chave);

    retorno = buscaSequencial(vet,chave);

    if (retorno == -1)
        printf("\n Registro nao encontrado!");
    else{
        printf("Registro encontrado \n");
        for (i = 0; i < N; i++){
            printf("%d \n", vet[i]);
        }
    }
    

    return (EXIT_SUCCESS);
}

int buscaSequencial (int *vetor, int k){
    int i;
    int j;
    int aux1;
    int aux2;

    for (i = 0; i < N; i++){
        if (vetor[i] == k){
            aux1 = vetor[0];
            vetor[0] = vetor[i];
            for (j = 0; j < i; j++){
                aux2 = vetor[j+1];
                vetor[j+1] = aux1;
                aux1 = aux2;
            }
            return vetor[0];
        }
    }
    return -1;
}
