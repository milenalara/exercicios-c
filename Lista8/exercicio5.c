#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isConector(char *palavra) {
    const char *conectores[] = {"e", "do", "da", "dos", "das", "de", "di", "du"};
    for (int i = 0; i < 8; i++) {
        if (strcmp(palavra, conectores[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

char* converterParaMaisculas(char *palavra) {
    // determina o tamanho do array
    int tamanho = sizeof(palavra) / sizeof(char);
    char maisculas[tamanho];

    // converter cada caracter da palavra original para maiscula e armazena na string de maiusculas
    for (int i = 0; i < tamanho; i++) {
        maisculas[i] = toUpper(palavra[i]);
    }
    // atribuir o caracter \0 que encerra uma string à ultima posição de maiusculas
    maisculas[tamanho] = "\0";

    // retorna o array convertido em maiusculas
    return maisculas;
}

int main() {
    int TAM_MAX = 100;
    char nome[TAM_MAX];

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    // Troca a nova linha (\n) lida pelo fgets pelo caracter delimitador de string \0
    nome[strcspn(nome, "\n")] = '\0';

    char iniciais[TAM_MAX];
    int j = 0;

    for (int i = 0; i < strlen(nome); i++) {
        if (i == 0 || nome[i - 1] == ' ') {
            char palavra[TAM_MAX];
            int k = 0;

            while (i < strlen(nome) && nome[i] != ' ') {
                palavra[k++] = nome[i++];
            }
            palavra[k] = '\0';

            if (!isConector(palavra)) {
                iniciais[j++] = toupper(palavra[0]);
            }
        }
    }

    iniciais[j] = '\0';

    printf("As iniciais são: %s\n", iniciais);

    return 0;
}
