#include <stdio.h>

void desenha_linha(int n);

int main(){

    int n;
    scanf("%d",&n);
    desenha_linha(n);

    return 0;
}

void desenha_linha(int n){

    for(int i=0;i<n;i++){
        printf("=");
    }
    printf("\n");

}