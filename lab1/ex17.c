#include <stdio.h>

int somainteiros(int n1, int n2);

int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    printf("soma dos numeros entre: %d e %d \n%d",a,b,somainteiros(a,b));

    return 0;
}

int somainteiros(int n1,int n2){
    int soma = 0;

    if(n1>n2){
        for(int i = n2+1; i<n1;i++){
            soma+=i;
        }
    }else{
        for (int i = n1+1; i < n2; i++){
            soma+=i;
        }
        
    }

    return soma;

}