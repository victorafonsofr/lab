#include <stdio.h>

void piramide(int n);

int main(){

    int n;
    scanf("%d",&n);
    piramide(n);

    return 0;
}

void piramide(int n){

    for(int i = 1; i<=n; i++){

        for(int j = n-1; j>i-1;j--){
            printf(" "); 
        }
        for(int j = 0; j<(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }

}