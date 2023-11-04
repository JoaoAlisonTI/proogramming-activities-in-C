#include <stdio.h>

int main() {
    int idade, cont, cont1, cont2, cont3;
    float altura, peso, acum, media, porc;
    cont = 0;
    cont1 = 0;
    acum = 0;
    cont2 = 0;
    cont3 = 0;
    
    
    while (cont < 5) {
        printf("Insira a idade:\n");
        scanf("%d", &idade);
        printf("Insira a altura:\n");
        scanf("%f", &altura);
        printf("Insira o peso:\n");
        scanf("%d", &peso);
        
        if (idade > 50) {
            cont1++;
        }
        if (idade > 10 && idade < 20) {
            acum = acum + altura;
            cont2++;
        }
        if (idade < 40) {
            cont3++;
        }
        cont++;
    }
    media = acum/cont2;
    porc = (cont3/5)*100;
    
    printf("\nQuantidade de pessoas com idade maior que 50: %d", cont1);
    printf("\nMédia das alturas, das pessoas com idade entre 10 e 20: %.2f", media);
    printf("\nPorcentagem das pessoas com peso inferior a 40 Kg: %.2f %%", porc);
    
    return 0;
}
    