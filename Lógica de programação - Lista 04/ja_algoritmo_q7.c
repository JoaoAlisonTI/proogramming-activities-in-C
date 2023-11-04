#include <stdio.h>

int main()
{
    float peso, NP1, NP2;
    printf("Digite o peso:\n");
    scanf("%f", &peso);
    NP1 = peso + (peso * 15/100);
    NP2 = peso - (peso * 20/100);
    printf("O novo peso, se a pessoa engordar 15%%: %.2f", NP1);
    printf("\nO novo peso, se a pessoa emagrecer 20%%: %.2f", NP2);
    return 0;
}