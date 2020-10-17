#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char t[30] = "achfdyaotzuyaewqnvfpaurijsgdhb";
char p[];

int forcaBruta (char *t, char *p, int n, int m);

int main (int argc, char** argv) {
    int retorno, tamanho;

    printf("\nSua biblioteca de pesquisa: ");
    printf("%s", t);

    printf("\nDigite a busca que dejesa fazer nessa biblioteca: ");
    scanf("%s", &p);

    tamanho = strlen(p);

    retorno = forcaBruta(t, p, 30, tamanho);

    if (retorno == -1)
        printf("\nRegistro nao encontrado!\n");
    else{
        printf("\nRegistro encontrado comecando na posicao: %d \n", retorno);
    }
    

    return (EXIT_SUCCESS);
}

int forcaBruta (char *t, char *p, int n, int m){
    int i, j;
    
    for (i = 0; i <= n-m; i++){
        j = 0;
        while((j < m) && (t[i+j] == p[j])){
            j = j + 1;
            if (j == m){
                return i;
            }
        }
    }
    return -1; 
}