#include <stdio.h>
#include <string.h>

// Definição da struct Estudante
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Estudante;

// Função para inserir os dados de um estudante
void inserirDados(Estudante *e) {
    printf("Insira o nome do estudante: ");
    fgets(e->nome, 50, stdin);
    e->nome[strcspn(e->nome, "\n")] = '\0'; // Remove o '\n' do final da string
    printf("Insira a idade do estudante: ");
    scanf("%d", &e->idade);
    printf("Insira a nota do estudante: ");
    scanf("%f", &e->nota);
    getchar(); // Limpa o buffer do teclado
}

// Função para atualizar a nota de um estudante
void atualizarNota(Estudante *e, float novaNota) {
    e->nota = novaNota;
}

// Função para mostrar os dados de um estudante
void mostrarDados(Estudante e) {
    printf("\n--- Informações do Estudante ---\n");
    printf("Nome: %s\n", e.nome);
    printf("Idade: %d\n", e.idade);
    printf("Nota: %.2f\n", e.nota);
    printf("--------------------------------\n");
}

// Função principal
int main() {
    Estudante estudante;
    int opcao;
    float novaNota;

    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("1. Inserir dados do estudante\n");
        printf("2. Atualizar nota do estudante\n");
        printf("3. Mostrar dados do estudante\n");
        printf("4. Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                inserirDados(&estudante);
                break;
            case 2:
                printf("Insira a nova nota: ");
                scanf("%f", &novaNota);
                getchar(); // Limpa o buffer do teclado
                atualizarNota(&estudante, novaNota);
                break;
            case 3:
                mostrarDados(estudante);
                break;
            case 4:
                printf("Saindo do programa.\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }
}
