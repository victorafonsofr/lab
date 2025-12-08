#include <stdio.h>

int somadobro(int *x, int *y);

int main(){

    int a,b;
    scanf("%d %d",&a,&b);
    printf("a: %d\nb: %d\nsoma do dobro:%d",a,b,somadobro(&a,&b));

    return 0;
}

int somadobro(int *x, int *y){

    int a = *x*2;
    int b = *y*2;

    *x=a;
    *y=b;
    return *x+*y;

}