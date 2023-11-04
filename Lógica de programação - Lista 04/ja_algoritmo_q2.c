#include <stdio.h>

int main()
{
    float n1, n2, n3, p1, p2, p3, MP;
    printf("Insira as 3 notas:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Insira os pesos de cada nota:\n");
    scanf("%f %f %f", &p1, &p2, &p3);
    MP = (n1 * p1 + n2 * p2 + n3 * p3)/(p1 + p2 + p3);
    printf("A média ponderada é = %.1f\n", MP);
    return 0;
}