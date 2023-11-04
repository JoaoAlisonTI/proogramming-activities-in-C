#include <stdio.h>

int main()
{
    float baseMaior, baseMenor, altura, areaT;
    printf("Valor da base maior:\n");
    scanf("%f", &baseMaior);
    printf("Valor da base menor:\n");
    scanf("%f", &baseMenor);
    printf("Valor da altura:\n");
    scanf("%f", &altura);
    areaT = ((baseMaior + baseMenor) * altura)/ 2;
    printf("\nA área do trapézio é = %.2f\n", areaT);
    return 0;
}