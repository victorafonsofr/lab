#include <stdio.h>

void media_notas(float n1, float n2, float n3, char l);

int main(){

    float n1,n2,n3;
    char letra;
    scanf("%f%f%f",&n1,&n2,&n3);
    scanf(" %c",&letra);
    media_notas(n1,n2,n3,letra);
    return 0;
}

void media_notas(float n1, float n2, float n3, char l){
    if(l=='A' || l=='a'){
        printf("%f",(n1+n2+n3)/3);
        
    }else if(l=='P'|| l=='p'){
        printf("%f",((n1*5)+(n2*3)+(n3*2))/10);
    }else{
        printf("letra invalida!");
    }
}