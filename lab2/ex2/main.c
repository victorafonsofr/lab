#include <stdio.h>
#include <locale.h>
#include "mstring.h" 

#define MAX_LEN 100

int main() {
    setlocale(LC_ALL, " Portuguese");

    char s[MAX_LEN];
    char s_copia[MAX_LEN];
    char s_cat[MAX_LEN * 2];
    
    printf("--- Teste das Funcoes Customizadas ---\n");
    printf("Digite uma string (max %d chars): ", MAX_LEN - 1);
    if (fgets(s, MAX_LEN, stdin) == NULL) return 1;
    
    
    int len = mstrlen(s); 
    if (len > 0 && s[len] == '\n') {
        s[len] = '\0';
    }
    
    mstrcpy(s_copia, s);
    mstrcpy(s_cat, s);

    printf("\nString Base: '%s'\n", s);
    printf("Tamanho (mstrlen): %i\n", mstrlen(s));

    char d[MAX_LEN];
    mstrcpy(d, s);
    printf("Copia (mstrcpy): '%s'\n", d);

    char c[] = " anexo";
    mstrcat(s_cat, c);
    printf("Concatenacao: '%s'\n", s_cat);

    printf("Comparacao (base vs concat): %i\n", mstrcmp(s, s_cat));

    mstrupper(s_copia);
    printf("Maiusculas: '%s'\n", s_copia);
    mstrlower(s_copia);
    printf("Minusculas: '%s'\n", s_copia);

    printf("Vogais: %i\n", mcount_vogais(s_copia));

    char espacos[] = "  A n a r o m a";
    printf("Original c/ espacos: '%s'\n", espacos);
    mremove_espacos(espacos);
    printf("Sem espacos: '%s'\n", espacos);

    mstrlower(espacos);
    printf("Palindromo ('%s'): %s\n", espacos, meh_palindromo(espacos) == 1 ? "Sim" : "Nao");

    return 0;
}