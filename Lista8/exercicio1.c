#include <stdio.h>
#include <string.h>

#define TAMANHO_MAXIMO 100

// Escreva um programa que leia do teclado uma string S. Gere uma string I,
// com os caracteres em ordem contrária.

int main() {
    char str[TAMANHO_MAXIMO];

    // captura todo o input até encontrar o primeiro \n
    fgets(str, TAMANHO_MAXIMO, stdin);

    // supondo que str = "abcd\n"
    // strcspn(str, "\n") conta o numero de caracteres antes de "\n", neste caso, 4 ("abcd")
    // portanto, str[strcspn(str, "\n")] é o mesmo que str[4]
    // nosso array vai do index 0 até o 3, logo, str[4] é a posição na memoria
    // imediatamente posterior ao array. portanto, é onde vamos colocar o delimitador \0
    str[strcspn(str, "\n")] = '\0';

    // le o tamanho da string até encontrar o \0
    int tamanhoStr = strlen(str);

    // declarando string para armazenar o valor invertido
    char invertida[tamanhoStr];

    // i percorre a string invertida do inicio ate o fim
    // j percorre a string original (str) do fim até o inicio
    for(int i = 0, j = tamanhoStr - 1; i < tamanhoStr; i++, j--) {
        invertida[i] = str[j];
    }

    printf("string original: %s\n", str);
    printf("string invertida: %s\n", invertida);


    return 0;
}