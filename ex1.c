#include <stdio.h>

int main(){
    int i;
    float r;
    char c;

    int* p = &i;
    float* q = &r;
    char* s = &c;

    scanf("%d %f %c", p, q, s);
    printf("i: %d\nr: %.2f\nc:%c\n",*p, *q, *s);

    return 0;
}