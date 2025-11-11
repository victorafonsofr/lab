#include <stdio.h>
#include <math.h>

double volume_cilindro(float h, float r);

int main(){

    float altura, raio;
    scanf("%f%f",&altura,&raio);
    printf("altura: %f\nraio: %f\nvolume cilindro: %f\n",altura,raio,volume_cilindro(altura,raio));

    return 0;
}

double volume_cilindro(float h, float r){
    float volume = pow(r,2)*3.141592*h;
    return volume;
}
