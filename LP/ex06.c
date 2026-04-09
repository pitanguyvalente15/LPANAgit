#include <stdio.h>

int main() {
    float n1, n2;

    printf("N1: ");
    scanf("%f",&n1);
    do{
        printf("N2: ");
        scanf("%f",&n2);
        if(n2==0)
            printf("\nValor inválido! Digite novamente\n");
    }while(n2==00);
    
    printf("Resultado: %.2f", n1/n2);
}