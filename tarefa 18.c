#include <stdio.h>

// Variável global
int resultado;

// Função que usa a variável global para armazenar o resultado
void calcularSomaGlobal(int a, int b) {
    resultado = a + b; 
    printf("Resultado (global): %d\n", resultado);
}

// Função que usa uma variável local para armazenar o resultado
void calcularSomaLocal(int a, int b) {
    int resultado = a + b; 
    printf("Resultado (local): %d\n", resultado);
}

int main() {
    int x = 5, y = 10;

    printf("Usando a função calcularSomaGlobal:\n");
    calcularSomaGlobal(x, y); 

    printf("Usando a função calcularSomaLocal:\n");
    calcularSomaLocal(x, y); 

    
    printf("\nValor final de resultado (global) no main: %d\n", resultado);

    return 0;
}
