#include <stdio.h>

// Crie um programa que contenha uma matriz de float com três linhas e três colunas. 
// Imprima o endereço de cada posição dessa matriz.

int main() {
    float matriz[3][3];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereço matriz[%d][%d] = %p\n", i, j, &matriz[i][j]);
        }
        
    }
    

}
