#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, equac, delta;
    // a != 0;
    //discriminante positivo (Δ > 0): duas soluções para a equação;

    //discriminante igual a zero (Δ = 0): as soluções da equação são repetidas;

    //discriminante negativo (Δ < 0): não admite solução real.
    printf("Insira os valores de a, b e c:\n");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("\nO A é igual a zero, então não é uma equação do 2° grau");
    } else {
        delta = (b * b) - 4 * a * c;
        printf("Valor do delta: %.1f", delta);
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / 2 * a;
            x2 = (-b - sqrt(delta)) / 2 * a;
            printf("\nValor de x1: %.2f", x1);
            printf("\nValor de x2: %.2f\n", x2);
            equac = a * (x1 * x1) + b * x1 + c;
            if (equac == 0) {
                printf("\nx1 é a raiz");
            }
            equac = a * (x2 * x2) + b * x2 + c;
            if (equac == 0) {
                printf("\nx2 é a raiz");
            }
            if (equac != 0) {
                printf("Nenhuma é a raiz");
            }
        } else if (delta < 0) {
            printf("\nDiscriminante negativo: não admite solução real");
        } else if (delta == 0) {
            x1 = (-b + sqrt(delta)) / 2 * a;
            printf("\nO valor de x: %.2f", x1);
            equac = a * (x1 * x1) + b * x1 + c;
            if (equac == 0) {
                printf("\nO valor de x é a raiz");
            } else {
                printf("\nNão é a raiz");
            }
        }
    }
}
    