#include <stdio.h>

int fatorial(int n);

int main(){

    int a;
    scanf("%d",&a);
    printf("%d",fatorial(a));

    return 0;
}

int fatorial(int n){
    int fatorial = 1; 

    for(int i = 1; i<=n; i++){
        fatorial*=i;
    }
    return fatorial;
}