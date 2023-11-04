#include <stdio.h>
#include <math.h>

int main()
{
    float N, quad, cub, raizQuad, raizCub;
    printf("Insira um número positivo e maior que zero:\n");
    scanf("%f", &N);
    if (N > 0) {
        quad = pow(N, 2);
        printf("O quadrado é: %.2f", quad);
        cub = pow(N, 3);
        printf("\nO cubo é: %.2f", cub);
        raizQuad = sqrt(N);
        printf("\nA raiz quadrada é: %.2f", raizQuad);
        raizCub = cbrt(N);
        printf("\nA raiz cúbica é: %.2f", raizCub);
    } else {
        printf("\nNúmero inválido...");
    }
    return 0;
}