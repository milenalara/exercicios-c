#include <stdio.h>

// compile: 
// clang -o Cap5-comandos-repeticao/out/exercicio16 Cap5-comandos-repeticao/exercicio16.c
// run:
// Cap5-comandos-repeticao/out/exercicio16
int main()
{
    double n, hn;
    hn = 0;

    printf("Informe o termo: ");
    scanf("%lf", &n);

    for (int i = 1; i <= n; i++)
    {
        hn += 1.0/i;
    }
    
    printf("%lf\n", hn);

    return 0;
}
