#include <stdio.h>

int dobro(int n){
    return n*2;
}

int main(){

    int n;
    scanf("%d",&n);
    printf("%d",dobro(n));

    return 0;
}