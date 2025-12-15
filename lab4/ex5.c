#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,x,count = 0;
    scanf("%d",&n);

    int *vet = (int *) malloc(n*sizeof(int));
    
    for(int i = 0; i<n; i++){
        scanf("%d",vet+i);
    }

    scanf("%d",&x);

    for(int i = 0; i<n ; i++){
        if(*(vet+i)%x==0){
            count+=1;
            printf("%d\n", *(vet+i));
        }
    }
    printf("numero de multiplos de %d: %d\n",x,count);

    free(vet);
    return 0;
}