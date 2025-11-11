#include <stdio.h>

int potencia(int x, int z);

int main(){

    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",potencia(a,b));

    return 0;
}

int potencia(int x, int z){

    int pot=1;
    for(int i = 0; i<z;i++){
        pot*=x;
    }
    return pot;

}
