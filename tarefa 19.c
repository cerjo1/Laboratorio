#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para armazenar as informações do produto
typedef struct {
    int codigo;
    char descricao[100];
    float preco_custo;
} Produto;

int main() {
    // Declaração de um array para armazenar 10 produtos
    Produto produtos[10];

    printf("Cadastro de 10 produtos\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Produto %d:\n", i + 1);

        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        getchar();

        printf("Descrição: ");
        gets(produtos[i].descricao); // Captura a descrição do produto.

        printf("Preço de custo: ");
        scanf("%f", &produtos[i].preco_custo);
        getchar();

        printf("\n");
    }

    printf("\nProdutos cadastrados:\n");
    for (int i = 0; i < 10; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Preço de custo: %.2f\n\n", produtos[i].preco_custo);
    }

    return 0;
}