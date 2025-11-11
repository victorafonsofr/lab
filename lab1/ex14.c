#include <stdio.h>

float kml(float d, float l);

int main(){
    
    float d,l;
    scanf("%f%f",&d,&l);
    
    float consumo = kml(d,l);

    if(consumo<8){
        printf("venda o carro!");
    }else if(consumo>=8 && consumo<=14){
        printf("economico!");
    }else{
        printf("super economico!");
    }

    return 0;
}

float kml(float d, float l){
    return d/l;
}