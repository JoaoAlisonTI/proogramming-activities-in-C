#include <stdio.h>

int main() {
    float saldoMedio, credito;
    
    printf("Insira o saldo médio: ");
    scanf("%f", &saldoMedio);
    
    if (saldoMedio <= 200.00) {
        credito = saldoMedio * 10/100;
    } else if (saldoMedio > 200.00 && saldoMedio <= 300.00) {
        credito = saldoMedio * 20/100;
    } else if (saldoMedio > 300.00 && saldoMedio <= 400.00) {
        credito = saldoMedio * 25/100;
    } else {
        credito = saldoMedio * 30/100;
    }
    printf("\nValor do saldo médio: %.2f", saldoMedio);
    printf("\nValor do crédito: %.2f", credito);
    
    return 0;
}
