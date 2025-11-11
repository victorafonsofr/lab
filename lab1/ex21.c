#include <stdio.h>

void linhas(int n);

int main(){

    int n;
    scanf("%d",&n);
    linhas(n);

    return 0;
}

void linhas(int n){
    for(int i = 1; i<=n;i++){
        for(int j = 0; j<i;j++){
        printf("!");
        }printf("\n");
    }
}