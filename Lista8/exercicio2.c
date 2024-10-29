#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

// Desenvolva um programa para criptografar uma string. Para isso, solicite ao usuário uma
// chave k, correspondente a um número inteiro. Para criptografia, obtenha o número ASCII de
// cada uma das letras e some a cada uma delas o valor à chave k. Converta a letra obtida
// novamente para string, para gerar a letra criptografada.
// Dica: Para evitar que a soma seja superior a 255, fora do intervalo da tabela ASCII, divida o
// valor da soma por 255.

char* encrypt(char *str, int key) {
    int size = strlen(str) / sizeof(char);
    char encryptedString[size];

    for(int i = 0; i < size; i++) {
        int ASCII = (int)str[i];
        int encryptedChar = (ASCII + key) % 255;
        encryptedString[i] = (char)encryptedChar;
    }

    return encryptedString;
}

int main() {
    int k;
    char str[MAX_SIZE];

    printf("Informe o valor da chave de criptografia\n");
    scanf("%d", &k);

    printf("Informe a string\n");
    fgets(str, MAX_SIZE, stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("String original: %s\n", str);
    printf("String criptografada: %s\n", encrypt(str, k));

}