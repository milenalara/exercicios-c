#include <stdio.h>

// Escreva um programa que contenha duas variáveis inteiras.
// Compare seus endereços e exiba o maior endereço.

int main() {
    int num1 = 1, num2 = 2;

    printf("Endereço de num1 = %p\n", &num1);
    printf("Endereço de num2 = %p\n", &num2);

    if(&num1 > &num2) {
        printf("O maior endereço de memória é de num1 = %p\n", &num1);
    } else {
        printf("O maior endereço de memória é de num2 = %p\n", &num2);
    }

    return 0;
}
