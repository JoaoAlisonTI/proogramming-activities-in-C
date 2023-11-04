#include <stdio.h>

int main() {
    float salario, novoSalario;
    
    printf("Digite o valor do salário:\n");
    scanf("%f", &salario);
    
    if (salario < 500.00) {
        novoSalario = salario + (salario * 30/100);
        printf("\nValor do salário reajustado: %.2f", novoSalario);
    } else {
        printf("\nVocê não tem direito ao aumento!");
    }
}