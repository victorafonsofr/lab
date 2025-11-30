#include <stdio.h>

float celsius_fahrenheit(float c){
    return (c * 9 / 5) + 32;
}

float fahrenheit_celsius(float f){
    return (f - 32) * 5 / 9;
}