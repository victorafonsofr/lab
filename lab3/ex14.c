#include <stdio.h>

void lernota(float a, float b, float *x,float *y);
void media(float *x, float *y, float *ms, float *mp);

int main(){

    float n1,n2, ms, mp;
    
    lernota(n1,n2,&n1,&n2);
    media(&n1,&n2,&ms,&mp);

    printf("n1: %.2f\nn2: %.2f\nmedia simples: %.2f, media ponderada %.2f\n",n1,n2,ms,mp);

    return 0;
}

void lernota(float a, float b, float *x,float *y){
    scanf("%f %f",x,y);
}

void media(float *x, float *y, float *ms, float *mp){
        
    *ms = (*x+*y)/2;
    *mp = (*x+(*y*2))/3;

}