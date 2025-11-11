#include <stdio.h>
#include <math.h>

float hipot(float a, float b);

int main(){

    float a,b;
    scanf("%f%f",&a,&b);
    printf("hipotenusa: %f",hipot(a,b));

    return 0;
}

float hipot(float a, float b){
    float hipot = sqrt((a*a)+(b*b));
    return hipot;
}
