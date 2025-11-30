#include <stdio.h>
#include "pessoa.h"

int main(){

    char nome[50];
    int idade;
    Pessoa pessoa;

    printf("entre com o nome: ");
    fgets(nome, 50, stdin);
    printf("\nentre com a idade: \n");
    scanf("%d",&idade);
    
    pessoa = criarPessoa(nome);
    pessoa.idade = idade;
    mostrarPessoa(pessoa);

    return 0;
}