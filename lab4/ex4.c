#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int j=0;
    scanf("%d",&n);
    getchar();

    char *s = (char *)  malloc((n+1)*sizeof(char));
    char semvogal[n+1];


    fgets(s, n+1, stdin);

    for(int i = 0; *(s+i)!='\0'; i++ ){

        if(*(s+i) == 'A' || *(s+i) == 'E'|| *(s+i) == 'I' ||*(s+i) == 'O' ||*(s+i) == 'U' ||*(s+i) == 'a' ||*(s+i) == 'e' ||*(s+i) == 'i' ||*(s+i) == 'o' ||*(s+i) == 'u'){
        }
        else{
            semvogal[j] = *(s+i);
            j++;
        }

    }

    semvogal[j]='\0';

    printf("%s \n",semvogal);

    free(s);

    return 0;
}