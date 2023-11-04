#include <stdio.h>

int main() {
    int cod, cont1, cont2, cont3, cont4, cont5, cont6;
    float cont, porc1, porc2;
    cont = 0;
    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    cont4 = 0;
    cont5 = 0;
    cont6 = 0;
    
    printf("Digite o código para votar\n");
    while (cod != 0) {
        scanf("%d", &cod);
        if (cod < 0 || cod > 6) {
            printf("Código inválido, tente novamente!\n");
        } else {   
            if (cod == 1) {
                cont1++;
            }
            if (cod == 2) {
                cont2++;
            }
            if (cod == 3) {
                cont3++;
            }
            if (cod == 4) {
                cont4++;
            }
            if (cod == 5) {
                cont5++;
            }
            if (cod == 6) {
                cont6++;
            }
            cont++;
        }
    }
    porc1 = (cont5 / cont) * 100;
    porc2 = (cont6 / cont) * 100;
    printf("\nVotos, candidato 1: %d", cont1);
    printf("\nVotos, candidato 2: %d", cont2);
    printf("\nVotos, candidato 3: %d", cont3);
    printf("\nVotos, candidato 4: %d", cont4);
    printf("\nVotos nulos: %d", cont5);
    printf("\nVotos em branco: %d", cont6);
    printf("\nPorcentagem de votos nulos: %.2f %%", porc1);
    printf("\nPorcentagem de votos em branco: %.2f %%", porc2);
    
    return 0;
}
