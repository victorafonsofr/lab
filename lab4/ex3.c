#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, contp=0, conti=0;
    scanf("%d",&n);

    int *p = (int*) malloc(n*sizeof(int)); // a


    for(int i = 0; i<n;i++){ //b
       scanf("%d",(p+i));
       if(*(p+i)%2==0){
            contp+=1;
       }else{
            conti+=1;
       }
    }
       printf("n impares: %d \nn pares: %d",conti, contp);
       
       free(p); //d


    return 0;
}