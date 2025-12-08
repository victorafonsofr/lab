#include <stdio.h>

int main(){

    int a,b;
    int *x = &a, *y = &b;

    scanf("%d %d", &a, &b);
    if(x>y){
        printf("valor do maior endereco, a: %d\n", *x);
    }else{
        printf("valor do maior endereco, b: %d\n", *y);
    }

    return 0;
}