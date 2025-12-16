#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(NULL));// gerador de nummeros aleatorios

    int n;

    printf("entre com o tamanho do vetor: ");
    scanf("%d",&n);
    printf("\n");

    if(n>9){ // verifica se o vetor é maior ou igual a 10

        double *vetor = (double *) malloc(n*sizeof(double));

        for(int i = 0; i<10; i++){ // preenche as primeiras 10 posicoes com numeros aleatorios de 1 a 99
            vetor[i] = (double)(rand()%101);
        }

        for(int i = 0; i<10; i++){ //imprime os valores
            printf("(%.2lf) ",vetor[i]);
        }

          free(vetor);

    }else{
        printf("o vetor deve ter ao menos 10 elementos. \n");
    }

  

    return 0;
}