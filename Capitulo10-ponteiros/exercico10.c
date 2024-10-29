#include <stdio.h>

// Considere a seguinte declaração: int a,*b,**c,***d. Escreva um
// programa que leia a variável a e calcule e exiba o dobro,
// o triplo e o quádruplo desse valor utilizando apenas os ponteiros
// b, c e d. O ponteiro b deve ser usado para calcular o dobro,
// c, o triplo, e d, o quádruplo.

int main() {
    int a;
    int *b, **c, ***d;

    printf("Digite o valor de a:\n");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("O dobro de %d é %d", a, (*b) * 2);
    printf("O triplo de %d é %d", a, (**c) * 3);
    printf("O quádruplo de %d é %d", a, (***d) * 4);
    return 0;
}
