#include <stdio.h>

int main() {
    int num1, num2, maior;

    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        maior = num1;
    } else {
        maior = num2;
    }

    while (1) {
        if (maior % num1 == 0 && maior % num2 == 0) {
            printf("O MMC dos números digitados é: %d\n", maior);
            break;
        }
        maior++;
    }

    return 0;
}
