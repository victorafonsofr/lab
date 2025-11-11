#include <stdio.h>

float converte_temp(float celsius);

int main(){

    float temp;
    scanf("%f",&temp);
    printf("Fahrenheit: %.1f", converte_temp(temp));

    return 0;
}

float converte_temp(float celsius){
    float F = ((celsius*9)/5+32); 
    return F;
}