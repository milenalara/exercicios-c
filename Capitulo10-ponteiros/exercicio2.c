#include <stdio.h>
// Escreva um programa que contenha duas variáveis inteiras.
// Leia essas variáveis do teclado. Em seguida, compare seus
// endereços e exiba o conteúdo do maior endereço.

int main() {
    int num1, num2;

    // Lê os valores das variáveis
    printf("Digite o valor de num1: ");
    scanf("%d", &num1);
    printf("Digite o valor de num2: ");
    scanf("%d", &num2);

    // Exibe os endereços das variáveis para referência
    printf("Endereço de num1 = %p\n", &num1);
    printf("Endereço de num2 = %p\n", &num2);

    // Compara os endereços e exibe o conteúdo da variável com o maior endereço
    if (&num1 > &num2) {
        printf("Conteúdo do maior endereço de memória (num1) = %d\n", num1);
    } else {
        printf("Conteúdo do maior endereço de memória (num2) = %d\n", num2);
    }

    return 0;
}
