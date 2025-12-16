#include <stdio.h>
#include <stdlib.h>

typedef struct Registro{ // a) struct registro
    int matricula;
    char sobrenome[20];
    int ano_nasc;

} Registro;

int main(){

    int nalunos;

    printf("entre com o numero de alunos\n");
    scanf("%d",&nalunos);  // b)

    Registro *alunos = (Registro*) malloc(nalunos*sizeof(Registro)); // c) memoria alocada para alunos

    for(int i = 0; i<nalunos; i++){ // d) preenchendo o vetor com a info. dos aulunos
        printf("digite a matricula do aluno %d\n",i+1);
        scanf("%d",&alunos[i].matricula);

        getchar(); //limpa o buffer

        printf("digite apenas um sobrenome do aluno %d\n",i+1);
        fgets(alunos[i].sobrenome, 20 , stdin);

        printf("digite o ano de nascimento do aluno %d\n",i+1);
        scanf("%d",&alunos[i].ano_nasc);

        getchar();
    }

    for(int i = 0; i<nalunos; i++){ // e)

        printf("aluno %d:\nmatricula: %d | sobrenome: %s | ano de nascimento: %d\n\n",i+1,alunos[i].matricula,alunos[i].sobrenome,alunos[i].ano_nasc);

    }    

    free(alunos);

    return 0;
}