#include <stdio.h>

int main() {
    float n1, n2, media, diferenca, produto, divisao;
    int cod;
    
    printf("Digite os números:\n");
    scanf("%f %f", &n1, &n2);
    printf("Escolha uma opção entre 1 e 4: ");
    scanf("%d", &cod);
    
    if (cod == 1) {
        media = (n1 + n2)/2;
        printf("\nA média entre os números: %.2f", media);
    } else if (cod == 2) {
        if (n1 > n2) {
            diferenca = n1 - n2;
            printf("\nA diferença entre os números: %.2f", diferenca);
        } else {
            diferenca = n2 - n1;
            printf("\nA diferença entre os números: %.2f", diferenca);
        }
    } else if (cod == 3) {
        produto = n1 * n2;
        printf("\nO produto entre os números: %.2f", produto);
    } else if (cod == 4) {
        if (n2 == 0) {
            printf("\nO segundo número deve ser diferente de zero!");
        } else {
            divisao = n1 / n2;
            printf("\nA divisão entre os números: %.2f", divisao);
        }
    } else {
        printf("\nOpção inválida!");
    }
}