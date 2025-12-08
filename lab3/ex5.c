#include <stdio.h>


void maiormenor(int *x, int *y);

int main(){
    
    int a,b;
    scanf("%d %d",&a,&b);
    maiormenor(&a,&b);
    printf("valores:\na: %d\nb: %d\n",a,b);
    return 0;
}

void maiormenor(int *x, int *y){
    int a=*x;
    int b=*y;

    if(a>b){
        *x=a;
        *y=b;
    }else{
        *x=b;
        *y=a;
    }
}