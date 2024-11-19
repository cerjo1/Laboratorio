#include <stdio.h>

void somaArray(int *array, int tamanho, int *soma) {
    *soma = 0;
    for (int i = 0; i < tamanho; i++) {
        *soma += array[i];
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;
    somaArray(array, 10, &soma);
    printf("A soma dos elementos do array é: %d\n", soma);
    return 0;
}
