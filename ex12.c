#include <stdio.h>

void frac(float num, int *inteiro, float *frac);

int main(){
    float n;
    int inteiro;
    float fracionario;

    scanf("%f",&n);

    frac(n, &inteiro, &fracionario);
    printf("numero: %f\nparte inteira: %d\nparte decimal: %f\n",n,inteiro,fracionario);

    return 0;
}

void frac(float num, int *inteiro, float *frac){

    *inteiro = (int)num;
    *frac = num - *inteiro;

}
