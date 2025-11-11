#include <stdio.h>

int isnegative(int n);

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",isnegative(n));

    return 0;
}

int isnegative(int n){
    if(n>0){
        return 1;
    }else if(n==0){
        return 0;
    }else{
        return -1;
    }
}