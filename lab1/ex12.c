#include <stdio.h>

int somalg(int n);

int main(){
    int n;
    scanf("%d",&n);
    if(n>0){
        printf("%d",somalg(n));
    }else{
        printf("Numero invalido");
    }
    
    return 0;
}

int somalg(int n){
        int soma = 0;
        while (n>0){
            
            soma+=n%10;
            n/=10;

        }
        return soma;
}