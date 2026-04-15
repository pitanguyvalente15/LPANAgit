#include <stdio.h>

int main (){
    float num1, num2, i;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    do{
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        if(num2 == 0);
            printf("Valor invalido\n");
    }while(num2==0);
    printf("A divisao dos dois numeros vale: %f", num1/num2);
return 0;
}