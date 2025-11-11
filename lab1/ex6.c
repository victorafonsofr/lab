#include <stdio.h>

int converte_tempo(int h, int min, int seg);

int main(){

    int n1, n2, n3;
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("%d segundos",converte_tempo(n1,n2,n3));
    
    return 0;
}

int converte_tempo(int h, int min, int seg){
    int segundos = (h*3600) + (min*60) + seg;
    return segundos;
}