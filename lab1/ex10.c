#include <stdio.h>

int maior(int a, int b);

int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    printf("maior: %d",maior(a,b));

    return 0;
}

int maior(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
