#include <stdio.h>

int main() {
    
    char tipo;
    int total;
    float cont2, cont3, cont4;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    
    printf("Qual o tipo do vinho?\n");
    while(!(tipo == 'f' || tipo == 'F')) {
        scanf("%c", &tipo);
        if (tipo == 't' || tipo == 'T') {
            cont2++;
        }
        if (tipo == 'b' || tipo == 'B') {
            cont3++;
        }
        if (tipo == 'r' || tipo == 'R') {
            cont4++;
        }
    }
    total = cont2 + cont3 + cont4;
    printf("Total: %d", total);
    printf("\nPorcentagem de vinho Tinto: %.2f %%", (cont2/total)*100);
    printf("\nPorcentagem de vinho Branco: %.2f %%", (cont3/total)*100);
    printf("\nPorcentagem de vinho Rosê: %.2f %%", (cont4/total)*100);
    printf("\nContagem terminada!");

    return 0;
}