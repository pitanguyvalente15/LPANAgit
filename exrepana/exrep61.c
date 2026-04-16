#include <stdio.h>
int main (){
    int i, num, soma = 0;
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
    }
    printf("A media dos 10 numeros digitados vale: %d", soma/10);
return 0;
}