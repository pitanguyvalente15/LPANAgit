#include <stdio.h>
int main(){
    int num1, num2, i, soma = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    for(i = num1; i<=num2; i++){
        soma = soma + i;
    }
    printf("A soma dos numeros entre eles vale: %d", soma);
return 0;
}