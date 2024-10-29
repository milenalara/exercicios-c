#include <stdio.h>

// cap 6 - exercicio 2
// crie um programa que leia do teclado seis valores inteiros e em seguida mostre
// na tela os valores lidos na ordem reversa

int main() {
    int arraySize = 6;
    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++) {
        printf("Informe o %dº número inteiro:\n", i+1);
        scanf("%d", &numbers[i]);
    }

    printf("Sequência de números invertida:\n");
    for (int i = arraySize - 1; i >= 0; i--) {
        printf("%d\t", numbers[i]);
    }
    
    return 0;
}