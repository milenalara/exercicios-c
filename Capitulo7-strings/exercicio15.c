#include <stdio.h>
#include <string.h>

// Escreva um programa que leia duas strings e as imprima em ordem
// alfabética, a ordem em que elas apareceriam em um dicionário.

int main() {
    char str1[100], str2[100];

    printf("string 1: \n");
    fgets(str1, sizeof(str1), stdin);

    printf("string 2: \n");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    if (strcmp(str1, str2) < 0) {
        printf("Ordem alfabética: %s, %s\n", str1, str2);
    } else if(strcmp(str1, str2) > 0) {
        printf("Ordem alfabética: %s, %s\n", str2, str1);
    } else {
        printf("As strings são iguais\n");
    }

    return 0;
}
