#include <stdio.h>
#include <stdlib.h>

int main(){

    int *vet = (int *) calloc(1500,sizeof(int)), qzero = 0;

    for(int i = 0; i<1500;i++){ //verificar se o vetor possui 1500 valores 0 
        if(*(vet+i)==0){
            qzero+=1;
        }
    }
    printf("quantidade de zeros: %d\n", qzero);

    for(int i = 0; i<1500;i++){ //cada valor do vetor sera igual ao indice
        *(vet+i)=i;
    }

    for(int i = 0; i<10; i++){
        printf("(%d) ",*(vet+i));
    } printf("\n");

    for(int i = 1490; i<1500; i++){
        printf("(%d) ",*(vet+i));
    }
    printf("\n");

    free(vet);

    return 0;
}