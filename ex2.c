#include <stdio.h>

int main(){

    int a,b;
    int *p = &a, *q = &b;
    
    if(p>q){
        printf("maior endereco, a: %p\n", p);
    }else{
        printf("maior endereco, b: %p\n", q);
    }

    return 0;
}