#include <stdio.h>

int somarateX(int);

int main(){
    int num, resposta;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resposta = somarateX(num);
    printf("A soma dos numeros entre 1 e o valor digitado vale: %d", resposta);
    return 0;
}

int somarateX(int num) {
    int soma = 0;
    int i;
    
    for (i = 1; i <= num; i++) {
        soma = soma + i;
    }
    
    return soma;
}