#include <stdio.h>

int main() {
    int num, primo;
    primo = 1;

    printf("Digite um valor:\n");
    scanf("%d", &num);

    if (num <= 1) {
        printf("Digite um número maior que 1\n");
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            printf("É primo\n", num);
        } else {
            printf("Não é primo\n", num);
        }
    }

    return 0;
}
