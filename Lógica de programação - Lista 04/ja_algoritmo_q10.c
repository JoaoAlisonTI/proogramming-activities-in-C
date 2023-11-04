#include <stdio.h>

int main()
{
    int diaAtual, mesAtual, anoAtual, dia, mes, ano;
    int idadeAno, idadeMes, idadeDia;
    printf("Digite o dia do seu nascimento:\n");
    scanf("%d", &dia);
    printf("Digite o mês do seu nascimento:\n");
    scanf("%d", &mes);
    printf("Digite o ano do seu nascimento:\n");
    scanf("%d", &ano);
    printf("Digite o dia atual:\n");
    scanf("%d", &diaAtual);
    printf("Digite o mês atual:\n");
    scanf("%d", &mesAtual);
    printf("Digite o ano atual:\n");
    scanf("%d", &anoAtual);
    
    
    idadeAno = anoAtual - ano;
    idadeMes = mesAtual - mes;
    idadeDia = diaAtual - dia;
    
    if (idadeDia < 0) {
        idadeMes--;
        idadeDia += 30;
    }
    if (idadeMes < 0) {
        idadeAno--;
        idadeMes += 12;
    }
    
    printf("\n%d anos", idadeAno);
    printf("\n%d meses", idadeMes);
    printf("\n%d dias", idadeDia);
    return 0;
}