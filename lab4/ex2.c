#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);

    int *p = (int*) malloc(n*sizeof(int)); // a


    for(int i = 0; i<n;i++){ //b
       scanf("%d",(p+i));
    }

    for(int i = 0; i<n;i++){ //c
       printf(" %d \n",*(p+i));
    }
    free(p); //d
    return 0;
}