#include <stdio.h>

void inverte(int *x, int *y);

int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);
    printf("valor de a: %d\nvalor de b: %d\n",a,b);
    inverte(&a,&b);
    printf("valores invertidos:\nvalor de a: %d\nvalor de b: %d",a,b);

    return 0;
}

void inverte(int *x, int *y){
    int a = *x;
    int b = *y;

    *x = b;
    *y = a;
}