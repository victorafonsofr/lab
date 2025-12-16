#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 2;
    int *vet = (int *) realloc(NULL, n*sizeof(int)), i=0; //criacao do vetor dinamico


    while(1){
        
        scanf("%d",vet+i);     

        if(*(vet+i)<0){ //verifica se e menor que zero
            break;
        }

        if(i==n-1){ // caso o indice do vetor se torne igual ao tamanho do vetor, o mesmo é acrescido de uma posiçao 
            n +=1;
            vet = (int *) realloc(vet,n*sizeof(int));
        }
        i++; //proxima posicao de vet;
    }

    for(int j = 0; j<i;j++){
        printf("(%d) ",*(vet+j));
    }

    free(vet);


    return 0;
}