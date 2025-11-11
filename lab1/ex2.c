#include <stdio.h>

void imprime_data(int dia, int mes, int ano);

int main()
{
    int dia,mes,ano;
    scanf("%d %d %d",&dia,&mes,&ano);
    imprime_data(dia,mes,ano);
    return 0;
}

void imprime_data(int dia, int mes, int ano){
    char meses[12][20]={
        "janeiro","fevereiro","março","abril","maio","junho","julho","agosto","setembro","outubro","novembro","dezembro"
    };

    printf("%d de %s de %d",dia,meses[mes-1],ano);
}