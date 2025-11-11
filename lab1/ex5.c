#include <stdio.h>
#include <math.h>

double volume_esf(double raio);

int main(){

    double raio;
    scanf("%lf",&raio);
    printf("%lf",volume_esf(raio));
    return 0;
}

double volume_esf(double raio){
    double volume = ((4*3.1415)*(pow(raio,3)))/3;
    return volume;
}