#include <stdio.h>
#include <math.h>

int main() {
    int cont, num_termos, num1, num2, num3;
    
    scanf("%d", &num_termos);
    num1 = 2;
    num2 = 7;
    num3 = 3;
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);
    cont = 4;
    while (cont != num_termos) {
        num1 *= 2;
        printf("%d\n", num1);
        cont++;
        
        if (cont != num_termos) {
            num2 *= 3;
            printf("%d\n", num2);
            cont++;
            
            if (cont != num_termos) {
                num3 *= 4;
                printf("%d\n", num3);
                cont++;
            }
        }
    }
    
    return 0;
}
