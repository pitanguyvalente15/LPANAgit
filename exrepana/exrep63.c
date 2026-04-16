#include <stdio.h>
int main(){
    int i, num, soma = 0;
    for(i = 0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("A soma dos numeros digitados vale: %d", soma);
return 0;
}