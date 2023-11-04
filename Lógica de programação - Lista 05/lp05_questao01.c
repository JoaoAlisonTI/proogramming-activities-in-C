#include <stdio.h>

int main() {
    float n1, n2, n3, n4, m;
    
    printf("Digite as 4 notas:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    
    m = (n1 + n2 + n3 + n4)/4;
    
    printf("\nSua nota: %.1f\n", m);
    if (m >= 7.0) {
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
}