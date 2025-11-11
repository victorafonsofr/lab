#include <stdio.h>

int ehtriangulo(int a, int b, int c);
void tipotriangulo(int a, int b, int c);

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    
    if(ehtriangulo(a,b,c)==1){
        printf("eh triangulo \n");
        tipotriangulo(a,b,c);
    }else{
        printf("nao eh triangulo");
    }

    return 0;
}

int ehtriangulo(int a, int b, int c){
    if((a < b+c) && (b<a+c) && (c<b+a)){
        return 1;
    }else{
        return 0;
    }
}

void tipotriangulo(int a, int b, int c){
    if(a==b && b==c){
        printf("equilatero");
    }else if(a==b || b==c || a==c){
        printf("isosceles");
    }else{
        printf("escaleno");
    }
}