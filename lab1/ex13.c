#include <stdio.h>

void calculadora(double a, double b, char simb);

int main(){
    double a,b;
    char op;
    scanf("%lf%lf %c",&a,&b,&op);
    calculadora(a,b,op);
    return 0;
}
void calculadora(double a, double b, char simb){
    switch (simb)
    {
    case '+':
        printf("%lf",a+b);
        break;
    
    case '-':
        printf("%lf",a-b);
        break;
    
    case '*':
        printf("%lf",a*b);;
        break;
    
    case '/':
        if(b>0){
            printf("%lf",a/b);
        }else{
            printf("denominador invalido");
        }
        
        break;
    
    default: 
        printf("operacao invalida");
        break;
    }
}
