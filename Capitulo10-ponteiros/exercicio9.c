#include <stdio.h>

// Crie uma função que receba como parâmetro um vetor e o imprima.
// Não utilize índices para percorrer o vetor, apenas aritmética de ponteiros

void imprimirVetor(int *vetor, int tamanho) {
    int *p = vetor;
    
    // usando aritimetica de ponteiro
    for(int i = 0; i < tamanho; i++) {
        printf("posicao [%d] = %d\n", i, *p);
        p++;
    }

    printf("\n");

    // usando índice
    for(int i = 0; i < tamanho; i++) {
        printf("posicao [i] = %d\n", i, vetor[i]);
    }
}

int main(){
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    imprimirVetor(vetor, tamanho);

    return 0;
}
