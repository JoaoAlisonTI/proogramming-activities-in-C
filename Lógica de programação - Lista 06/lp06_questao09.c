#include <stdio.h>

int main() {
    float anacleto, felisberto;
    int cont;
    cont = 0;
    anacleto = 1.50;
    felisberto = 1.10;
        
    while (felisberto <= anacleto) {
        anacleto = anacleto + 0.02;
        felisberto = felisberto + 0.03;
        //printf("Ainda não\n");
        cont++;
    }
    
    printf("\nSerá necessário %d anos para que Felisberto seja mais alto", cont);
    
     
    return 0;
}