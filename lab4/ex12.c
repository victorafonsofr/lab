#include <stdio.h>
#include <stdlib.h>

typedef struct Produto{ //a) guardando as informacoes dos produtos

    int cod_produto;
    char nome[50];
    int qtd_disp;
    float preco;

} Produto;

int main(){

    int nprod;
    printf("entre com o numero de produtos: \n");
    scanf("%d", &nprod); // n produtos

    if(nprod<1){
        printf("numero de produtos invalido.");
        return 0;
    }

    Produto *produtos = (Produto *) malloc(nprod*sizeof(Produto)); // vetor de produtos

    for(int i = 0; i<nprod; i++){ // b) preencher as informacoes do produto

        printf("digite o codigo do produto %d\n",i+1);
        scanf("%d",&produtos[i].cod_produto);

        getchar(); //limpa o buffer

        printf("digite o nome do produto %d\n",i+1);
        fgets(produtos[i].nome, 50 , stdin);

        printf("digite a quantidade no estoque:\n");
        scanf("%d",&produtos[i].qtd_disp);

        printf("digite o preco do produto %d:\n",i+1);
        scanf("%f",&produtos[i].preco);

    }

    float maiorp = produtos[0].preco;
    int maiorqtd = produtos[0].qtd_disp;
    int codp = produtos[0].cod_produto;
    int codqtd = produtos[0].cod_produto;

    for(int i = 0; i<nprod; i++){

        if(produtos[i].preco > maiorp){ // c) encontrar o maior preco de venda
        
            maiorp = produtos[i].preco;
            codp = produtos[i].cod_produto;
        
        }

        if(produtos[i].qtd_disp > maiorqtd){ // d) encontrar maior qtd no estoque
        
            maiorqtd = produtos[i].qtd_disp;
            codqtd = produtos[i].cod_produto;
        
        }

    }

    printf("produto com maior preco de venda: %d\nproduto com maior quantidade em estoque: %d\n",codp, codqtd); //imprime o codigo dos produtos 

    free(produtos);

    return 0;
}