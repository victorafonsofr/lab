#include <stdio.h>

int mstrlen(char s[]){
    int i;
    for(i=0;s[i]!='\0' && s[i]!='\n';i++){}
    return i;
}
void mstrcpy(char dest[], char orig[]){
    int i;

    for(i=0; orig[i]!='\0'; i++){
        dest[i]=orig[i];
    }
    dest[i]='\0';
    
}
void mstrcat(char dest[], const char orig[]) {
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    
    while (orig[j] != '\0') {
        dest[i] = orig[j]; 
        i++;               
        j++;              
    }

    dest[i] = '\0';
}
int mstrcmp(char a[], char b[]){
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) {
        i++;
    }
    return a[i] - b[i]; 
}

void mstrupper(char s[]){
    for(int i = 0; s[i]!='\0'; i++){
        if(s[i]>96 && s[i]<124){
            s[i]-=32;
        }
    }
}
void mstrlower(char s[]){
    for(int i = 0; s[i]!='\0';i++){
        if(s[i]>64 && s[i]<91){
            s[i]+=32;
        }
    }
}
int mcount_vogais(char s[]){
    int countv = 0;
    for(int i=0; s[i]!='\0'; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
           s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
            countv++;
        }
    }
    return countv;
} 
int meh_palindromo(char s[]) {
    int length = mstrlen(s);
    if (length == 0) return 1; 

    char sinvert[length + 1];
    int j;

    for (j = 0; j < length; j++) {
        sinvert[j] = s[length - 1 - j];
    }
    sinvert[length] = '\0'; 

    for (j = 0; j < length; j++) {
        if (s[j] != sinvert[j]) {
            return 0; 
        }
    }

    return 1; 
} 
void mremove_espacos(char s[]){
    int i, j;   
    for(i=0, j=0; s[i]!='\0'; i++){
        if(s[i]!=' '){
            s[j]=s[i];
            j++;
        }
    } s[j]='\0';
}