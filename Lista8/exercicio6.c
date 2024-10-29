#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXTO 1000

int isPalindromo(const char *texto) {
    int esquerda = 0; // Índice do início
    int direita = strlen(texto) - 1; // Índice do final

    while (esquerda < direita) {
        // Ignora espaços e caracteres não alfabéticos à esquerda
        while (esquerda < direita && !isalnum(texto[esquerda])) {
            esquerda++;
        }
        // Ignora espaços e caracteres não alfabéticos à direita
        while (esquerda < direita && !isalnum(texto[direita])) {
            direita--;
        }

        // Compara os caracteres (convertendo para minúsculas)
        if (tolower(texto[esquerda]) != tolower(texto[direita])) {
            return 0;
        }

        esquerda++;
        direita--;
    }

    return 1;
}

int main() {
    char texto[MAX_TEXTO];

    printf("Digite uma sequência de caracteres: ");
    fgets(texto, sizeof(texto), stdin);

    // Remove a nova linha lida pelo fgets
    texto[strcspn(texto, "\n")] = '\0';

    // Exibe a sequência lida
    printf("Sequência: %s\n", texto);

    // Verifica se é um palíndromo
    if (isPalindromo(texto)) {
        printf("É um palíndromo!\n");
    } else {
        printf("Não é um palíndromo.\n");
    }

    return 0;
}
