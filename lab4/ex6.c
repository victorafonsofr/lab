#include <stdio.h>
#include <stdlib.h>

int main(){

    int tam, valorp, valor;
    char op = 's';
    scanf("%d",&tam);

    int *memoria = (int *) calloc(tam, sizeof(int)); //memoria alocada (vetor dinamico)

    if(memoria ==  NULL){ // verifica se o tamanho escolhido eh valido
        printf("memoria insuficinte ou invalida\n");
        return 0;
    }

    while(op == 's' || op=='S'){ //menu

        printf("1. inserir valor em uma posicao\n2. consulte o valor contido em determinada posicao\n");

        scanf(" %c",&op);

        if(op == '1'){ //inserir valor em posicao da memoria
            printf("insira a posicao:\n");
            scanf("%d",&valorp);

            if(valorp>0 && valorp < tam+1){ //verificar se a posicao escolhida nao ultrapassa o valor alocado
                printf("insira o valor\n");
                scanf("%d",&valor);

                *(memoria+(valorp-1)) = valor; //valor informado armazenado na posicao "valorp" da memoria

            }
            else{
                printf("posicao nao disponivel.\n");
            }

        }
        else if(op == '2'){
            for(int i = 0; i<tam; i++){ //posicoes disponiveis para consulta
                printf("(%d) ",i+1);
            }
            printf("\nselecione uma posicao para consulta\n");
            scanf("%d",&valorp);

            if(valorp>tam || valorp<1){ //verifica se o valor inserido nao pertence ao intervalo da memoria 
                printf("opcao invalida.\n");
            }else{
                printf("valor da posicao apontada: %d\n",*(memoria+valorp-1));
            }
        }

        else{
            printf("opcao invalida.\n");
        }
        
        printf("Digite s para continuar, ou qualquer caracter para sair \n");
        scanf(" %c",&op);
    }

    free(memoria);

    return 0;
}

