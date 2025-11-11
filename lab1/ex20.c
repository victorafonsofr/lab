#include <stdio.h>


int qtd_primos(int n);
int primo(int n);


int main(){

    int n;
    scanf("%d",&n);
    printf("%d",qtd_primos(n));

    return 0;
}

int primo(int n){
    int i;

    if(n<=1){
        return 0;
}else{
    for(i = 2; i*i <= n; i++){
        if(n%i==0){
            return 0;
        }
    }
     return 1;
    
    }


}

int qtd_primos(int n){

    int cont = 0;

    for(int i = 2;i<n;i++){
        if(primo(i)==1){
            cont+=1;
        }
    }
    return cont;
}
