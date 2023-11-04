#include <stdio.h>

int main()
{
    float salario, novoSalario;
    printf("Valor do salário:\n");
    scanf("%f", &salario);
    novoSalario = salario + (salario * 25/100);
    printf("\nO salário com aumento é = %.2f\n", novoSalario);
    return 0;
}