#include <stdio.h>
#include <string.h>

 typedef struct {
 char nome[50];
 int idade;
} Pessoa;


Pessoa criarPessoa(char nome[]){
    Pessoa p;
    strcpy(p.nome,nome);
    return p;

}
void mostrarPessoa(Pessoa p){
    printf("Nome: %sIdade: %d\n",p.nome,p.idade);
}
