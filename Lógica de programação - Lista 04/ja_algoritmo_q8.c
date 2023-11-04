#include <stdio.h>

int main()
{
    int N, U, D, C;
    printf("Digite um número de 3 dígitos:\n");
    scanf("%d", &N);
    if (N > 99 && N <= 999) {
        U = N % 10;
        D = (N / 10) % 10;
        C = N / 100;
        printf("\nNúmero digitado: %d", N);
        printf("\nNúmero invertido: %d%d%d", U, D, C);
    } else {
        printf("\nDigite um número de 3 dígitos...");
    }
    return 0;
}