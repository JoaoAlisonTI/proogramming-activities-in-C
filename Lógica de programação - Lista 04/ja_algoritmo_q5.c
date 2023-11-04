#include <stdio.h>

int main()
{
    float r, PI, AC;
    printf("Insira o valor do raio:\n");
    scanf("%f", &r);
    PI = 3.14;
    AC = PI * r * r;
    printf("\nA área do Círculo é = %.2f\n", AC);
    return 0;
}