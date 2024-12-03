#include <stdio.h>

// Variável global
int contador = 0;


void incrementarContador() {
    contador++;
    printf("Valor de contador (global): %d\n", contador);
}

// Função com variável local
void exemploVariavelLocal() {
    int valorLocal = 10;
    valorLocal++; // Incrementa a variável local
    printf("Valor de valorLocal (local): %d\n", valorLocal);
}

int main() {
    for (int i = 0; i < 5; i++) {
        printf("\nChamada %d:\n", i + 1);
        incrementarContador();
        exemploVariavelLocal();
    }
    return 0;
}