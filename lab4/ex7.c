#include <stdio.h>
#include <stdlib.h>

int main(){

    int *loteria = (int*) malloc(6*sizeof(int)), *user = (int*) malloc(6*sizeof(int)), j = 0; //j conta acerto

    printf("insira os valores da loteria\n");
    for(int i = 0;i<6;i++){ //entrada dos valores da loteria para armazenar no vetor dinamico
        scanf("%d",loteria+i);
    }
    printf("insira os valores do usuario\n");
    for(int i = 0;i<6;i++){ //entrada dos valores do usuario para armazenar no vetor dinamico
        scanf("%d",user+i);
    }

    for(int i = 0; i<6 ;i++){ //verifica se existe algum numero da loteria que e igual à algum do usuario
        for(int k = 0; k<6 ; k++ ){
            if(*(loteria+i) == *(user+k)){
            j+=1;
        }
        }
        
    }

    if(j!=0){
        int *acertos = (int *) malloc(j*sizeof(int));
        int index_acerto = 0;
        for(int i = 0; i<6; i++){ //preenche o vetor dos acertos        
            for(int k = 0; k < 6; k++){
                if(*(loteria+i)==*(user+k)){
                    *(acertos+index_acerto) = *(user+k);
                    index_acerto+=1;
                }
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