#include <stdio.h>

void calc_esfera(float R, float *area, float *volume);

int main(){

    int raio;
    float area,volume;
    scanf("%d",&raio);
    calc_esfera(raio, &area, &volume);

    printf("raio: %d\narea da superficie: %.2f\nvolume: %.2f",raio, area, volume);

    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4*3.14*R;
    *volume = ((3.14)*R) * 4/3;
}
