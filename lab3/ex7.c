#include <stdio.h>

void somaA(int *x, int *y);

int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    somaA(&a,&b);
    printf("a: %d\nb: %d",a,b);

    return 0;
}

void somaA(int *x, int *y){

    int soma = *x+*y;
    *x = soma;

}
