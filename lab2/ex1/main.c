#include <stdio.h>
#include "operacoes.h"

int main(){
    char op='n';
    int a,b;

    while(op!='s'){
        printf("entre com dois valores\n");
        scanf("%d%d",&a,&b);
        
        printf("(+) somar\n(-) subtrair\n(*) multiplicar\n(/) dividir\n(s) sair\n");
        scanf(" %c",&op);

        
        if(op=='+'){
            printf("%d\n",soma(a,b));
        }
            
        else if(op=='-'){
            printf("%d\n",subtrai(a,b));
        }
            
        else if(op=='*'){
            printf("%d\n",multiplica(a,b));
        }

        else if(op=='/'){
            if(b!=0){
                printf("%d\n",divide(a,b));
            }else{printf("divisao por zero");}
        }
        else if(op=='s'|| op=='S'){
            break;
        }
    }

    return 0;
}