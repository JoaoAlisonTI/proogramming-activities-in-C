#include <stdio.h>

int main()
{
    float capacidadeTanque, quantLitros, quilPercorrido, gastoCombustivel, autonomia;
    printf("Qual a capacidade do tanque?\n");
    scanf("%f", &capacidadeTanque);
    printf("Quantos litros foram abastecidos?\n");
    scanf("%f", &quantLitros);
    printf("Quantos km foram percorridos?\n");
    scanf("%f", &quilPercorrido);
    
    gastoCombustivel = quilPercorrido / quantLitros;
    autonomia = (capacidadeTanque - quantLitros) * gastoCombustivel;
    printf("\nO gasto de combustível foi de: %.2f", gastoCombustivel);
    printf("\nA autonomia é de: %.2f", autonomia);
    return 0;
}