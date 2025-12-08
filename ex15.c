#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2);

int main(){

    float a,b,c,x1,x2;

    scanf("%f%f%f",&a,&b,&c);
    int n = raizes(a,b,c,&x1,&x2);

    printf("equacao: %.0fx^2 + %.0fx + %.0f \nx1: %.2f\nx2: %.2f\nnumero de raizes %d",a,b,c,x1,x2,n);

    return 0;
}

int raizes(float A, float B, float C, float *X1, float *X2){

    if(A!=0){
        
        int delta = pow(B,2) - (4*A*C);
        *X1 = (-B + sqrt(delta))/2*A;
        *X2 = (-B - sqrt(delta))/2*A;

        if(delta>0){//duas raizes reais
            
            if(*X1!=*X2){
                return 2;
            }
            
            return 1;

        }else if(delta==0){//uma raiz real

            return 1;

        }else{//nao existe real
            return 0;
        }
    }else{
        return 0;
    }

}
