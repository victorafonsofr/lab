#include <stdio.h>
#include <stdlib.h>

int main(){

    int *loteria = (int*) malloc(6*sizeof(int)), *user = (int*) malloc(6*sizeof(int)), count = 0, j = 0;

    printf("insira os valores da loteria");
    for(int i = 0;i<6;i++){ //entrada dos valores da loteria para armazenar no vetor dinamico
        scanf("%d",loteria+i);
    }

    for(int i = 0;i<6;i++){ //entrada dos valores do usuario para armazenar no vetor dinamico
        scanf("%d",user+i);
    }

    for(int i = 0; i<6 ;i++){ //verifica se existe algum numero da loteria que e igual à algum do usuario
        if(*(loteria+i) == *(user+j)){
            j+=1;
        }
    }

    if(j!=0){
        int *acertos = (int *) malloc(j*sizeof(int)), k=0;
        for(int i = 0; i<j; i++){ //preenche o vetor dos acertos        
            if(*(loteria+i) == *(user+k)){ //verificacao para armazenar no vetor
                *(acertos+i) = *(user+k);
                k++;
            }
        }
        printf("numeros sorteados: \n");
        for(int i = 0; i<6; i++){//exibe os valores sorteados
            printf("(%d) ",*(loteria+i));
        }
        printf("\nacertos: \n");

        for(int i = 0; i<j; i++){//exibe os valores sorteados
            printf("(%d) ",*(acertos+i));
        }
        free(acertos);
    }else{
        printf("nenhum acerto!\n");
    }

    free(loteria);
    free(user);    

    return 0;
}