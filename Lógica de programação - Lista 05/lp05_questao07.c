#include <stdio.h>

int main() {
    int dia, mes;
    
    printf("Digite o dia que você nasceu: ");
    scanf("%d", &dia);
    printf("Digite o mês que você nasceu, entre 1 a 12: ");
    scanf("%d", &mes);
    
    if ((dia <= 0 || dia >= 32) || (mes < 1 || mes > 12)) {
        printf("\nData inválida");
    } else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) {
        printf("\nÁries");
    } else if ((dia >= 21 && mes == 4) || (dia <= 20 && mes == 5)) {
        printf("\nTouro");
    } else if ((dia >= 21 && mes == 5) || (dia <= 20 && mes == 6)) {
        printf("\nGêmeos");
    } else if ((dia >= 21 && mes == 6) || (dia <= 22 && mes == 7)) {
        printf("\nCâncer");
    } else if ((dia >= 23 && mes == 7) || (dia <= 22 && mes == 8)) {
        printf("\nLeão");
    } else if ((dia >= 23 && mes == 8) || (dia <= 22 && mes == 9)) {
        printf("\nVirgem");
    } else if ((dia >= 23 && mes == 9) || (dia <= 22 && mes == 10)) {
        printf("\nLibra");
    } else if ((dia >= 23 && mes == 10) || (dia <= 21 && mes == 11)) {
        printf("\nEscorpião");
    } else if ((dia >= 22 && mes == 11) || (dia <= 21 && mes == 12)) {
        printf("\nSagitário");
    } else if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 1)) {
        printf("\nCapricórnio");
    } else if ((dia >= 21 && mes == 1) || (dia <= 19 && mes == 2)) {
        printf("\nAquário");
    } else if ((dia >= 19 && mes == 2) || (dia <= 20 && mes == 3)) {
        printf("\nPeixes");
    }
}

//Datas dos signos aproximadas*
//Áries: 21 de março a 20 de abril*
//Touro: 21 de abril a 20 de maio*
//Gêmeos: 21 de maio a 20 de junho*
//Câncer: 21 de junho a 22 de julho*
//Leão: 23 de julho a 22 de agosto*
//Virgem: 23 de agosto a 22 de setembro*
//Libra: 23 de setembro a 22 de outubro*
//Escorpião: 23 de outubro a 21 de novembro*
//Sagitário: 22 de novembro a 21 de dezembro*
//Capricórnio: 22 de dezembro a 20 de janeiro*
//Aquário: 21 de janeiro a 19 de fevereiro*
//Peixes: 19 de fevereiro a 20 de março*