#include <stdio.h>

void triangulo(int n);

int main(){

    int n;
    scanf("%d",&n);
    triangulo(n);

    return 0;
}

void triangulo(int n){
        for(int i = 1; i<=n;i++){
            for(int j = 0; j<i;j++){
            printf("*");
        }printf("\n");
    }
        for(int i = n-1; i>=1;i--){
            for(int j = i; j>=1;j--){
            printf("*"); 
        }printf("\n");
    }
}