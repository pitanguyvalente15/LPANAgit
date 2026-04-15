#include <stdio.h>
int main () {
    float num1, num2, i;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    while(num2==0){
        printf("Digite um segundo numero, porem positivo: ");
        scanf("%f", &num2);
        if(num2==0);
        printf("Numero invalido");
    }
    printf("O resultado da divisão vale: %f", num1/num2);
return 0;
}