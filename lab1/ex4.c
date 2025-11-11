#include <stdio.h>
#include <math.h>

int isperfectsqr(int n);

int main(){
    int n;
    scanf("%d",&n);
    if(isperfectsqr(n)==1){
        printf("quadrado perfeito");
    }else{
        printf("nao e quadrado perfeito");
    }
    return 0;
}

int isperfectsqr(int n){
    if(n>=0){
        float raiz = sqrt(n);
        if(((int)raiz*(int)raiz) == n){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}