#include <stdio.h>
#include <string.h>

// Definição da struct Aluno
typedef struct {
    char nome[50];
    int matricula;
    char dataNascimento[11]; // Formato: DD/MM/AAAA
    float notas[4];
    float media;
    char situacao[10];
} Aluno;

// Função para calcular a média do aluno e determinar sua situação
void calcularMedia(Aluno *aluno) {
    float soma = 0;
    for (int i = 0; i < 4; i++) {
        soma += aluno->notas[i];
    }
    aluno->media = soma / 4;
    strcpy(aluno->situacao, aluno->media >= 7.0 ? "Aprovado" : "Reprovado");
}

// Função para inserir os dados de um aluno
void inserirDadosAluno(Aluno *aluno) {
    printf("Nome do aluno: ");
    fgets(aluno->nome, 50, stdin);
    aluno->nome[strcspn(aluno->nome, "\n")] = '\0'; // Remove o '\n'
    
    printf("Matrícula: ");
    scanf("%d", &aluno->matricula);
    getchar(); // Limpa o buffer
    
    printf("Data de nascimento (DD/MM/AAAA): ");
    fgets(aluno->dataNascimento, 11, stdin);
    aluno->dataNascimento[strcspn(aluno->dataNascimento, "\n")] = '\0';
    
    printf("Insira as notas das 4 disciplinas:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &aluno->notas[i]);
    }
    getchar(); // Limpa o buffer
    
    // Calcula a média e verifica a situação
    calcularMedia(aluno);
}

// Função para exibir os dados de um aluno
void exibirDadosAluno(Aluno aluno) {
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Data de Nascimento: %s\n", aluno.dataNascimento);
    printf("Notas: ");
    for (int i = 0; i < 4; i++) {
        printf("%.2f ", aluno.notas[i]);
    }
    printf("\nMédia: %.2f\n", aluno.media);
    printf("Situação: %s\n", aluno.situacao);
    printf("----------------------\n");
}

// Função principal
int main() {
    int linhas, colunas;

    // Definição da matriz de alunos
    printf("Quantos alunos deseja registrar? ");
    scanf("%d", &linhas);
    getchar(); // Limpa o buffer
    
    printf("Quantos registros por linha deseja ter? ");
    scanf("%d", &colunas);
    getchar(); // Limpa o buffer
    
    Aluno alunos[linhas][colunas];

    // Inserção e exibição dos dados dos alunos
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\nInserindo dados do aluno [%d][%d]:\n", i + 1, j + 1);
            inserirDadosAluno(&alunos[i][j]);
        }
    }

    printf("\nExibindo os dados de todos os alunos:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("\nAluno [%d][%d]:\n", i + 1, j + 1);
            exibirDadosAluno(alunos[i][j]);
        }
    }

    return 0;
}
