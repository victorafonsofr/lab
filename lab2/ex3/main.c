#include <stdio.h>
#include "conversor.h"
#include <stdlib.h>

int main(){

    int op;
    float temp;

    while(op!=3){
        printf("Entre com a temperatura: \n");
        scanf("%f", &temp);
        system("cls");

        printf("Conversor de unidades\n1. Celsius para Fahrenheit\n2. Fahrenheit para Celsius\n3. para sair\n");
        scanf("%d", &op);
        system("cls");

        if(op==1){ 
            printf("Temperatura em Fahrenheit: %.2f\n", celsius_fahrenheit(temp));
        }
        else if(op==2){
            printf("Temperatura em Celsius: %.2f\n", fahrenheit_celsius(temp));
        }
        else if(op==3){
            printf("Saindo...\n");
        }
        else{
            printf("Opcao invalida\n");
        }
    }

    return 0;
}