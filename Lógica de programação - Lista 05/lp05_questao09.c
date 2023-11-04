#include <stdio.h>

int main() {
    float salario, novoSalario, bonus;
    
    printf("Insira o valor do salário: ");
    scanf("%f", &salario);
    
    if (salario <= 500.00) {
        bonus = salario * 5/100;
    }
    if (salario > 500.00 && salario <= 1200.00) {
        bonus = salario * 12/100;
    }
    if (salario > 1200.00) {
        bonus = 0.00;
    }
    
    novoSalario = salario + bonus;
    
    if (salario <= 600.00) {
        novoSalario = novoSalario + 150.00;
    }
    if (salario > 600.00) {
        novoSalario = novoSalario + 100.00;
    }
    
    printf("\nValor do novo salário: %.2f", novoSalario);
    
    return 0;
}
