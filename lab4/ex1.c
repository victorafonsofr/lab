#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p = (int*) malloc(5*sizeof(int)); // a

    for(int i = 0; i<5;i++){ //b
       scanf("%d",(p+i));
    }

    for(int i = 0; i<5;i++){ //c
       printf(" %d \n",*(p+i));
    }
    free(p); //d
    return 0;
}