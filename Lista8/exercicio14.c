// 14. Escreva um procedimento que preencha uma matriz M5×5. Desenvolva funções 
// (uma para cada opção abaixo), que recebam a matriz preenchida, calcule e 
// retorne as informações a seguir:
// a) Soma da linha 4 de M;
// b) Soma da coluna 2 de M;
// c) Soma da diagonal principal;
// d) Soma da diagonal secundária;
// e) Soma de todos os elementos da matriz.

#include <stdio.h>
#define TAMANHO 5

// procedimento que preenche a matriz com valores dos indices
void preencheMatriz(int matriz[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            matriz[i][j] = i + j;
        }
    }
}

void preencheMatrizInputUsuario(int matriz[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }
}

void imprimeMatriz(int matriz[TAMANHO][TAMANHO]) {
    for(int i = 0; i < TAMANHO; i++) {
        for(int j = 0; j < TAMANHO; j++) {
            printf("[%d][%d] = %d  ", i, j, matriz[i][j]);
        }
        printf("\n");
    }    
}
// letra a
int somaLinha4(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for (int j = 0; j < TAMANHO; j++) {
        soma += matriz[3][j];
    }
    return soma;
}

// letra b
int somaColuna2(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][1];
    }
    return soma;
}

// letra c
int somaDiagonalPrincipal(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][i];
    }
    return soma;
}

// letra d
// diagonal secundaria eh aquela onde a soma dos indicies é igual ao tamanho da matriz - 1.
// i + j = TAMANHO - 1
// j = TAMANHO - 1 - i
int somaDiagonalSecundaria(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;
    for (int i = 0; i < TAMANHO; i++) {
        soma += matriz[i][TAMANHO - 1 - i];
    }
    return soma;
}

// letra e
int somaElementosMatriz(int matriz[TAMANHO][TAMANHO]) {
    int soma = 0;

    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            soma += matriz[i][j];
        }
    }

    return soma;
}

int main() {
    int m[TAMANHO][TAMANHO];

    preencheMatriz(m);
    imprimeMatriz(m);
    printf("soma da linha 4 = %d\n", somaLinha4(m));
    printf("soma da coluna 2 = %d\n", somaColuna2(m));
    printf("soma da diagonal principal = %d\n", somaDiagonalPrincipal(m));
    printf("soma da diagonal secundaria = %d\n", somaDiagonalSecundaria(m));
    printf("soma dos elementos da matriz = %d\n", somaElementosMatriz(m));

    return 0;
}