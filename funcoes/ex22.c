#include <stdio.h>

int maior(int);

int main(){
    int num, resposta;
    printf("Digite um numero: ");
    scanf("%d", &num);
    resposta = maior(num);
    printf("O menor inteiro positivo que possue um quadrado maior ao numero dado vale: %d", resposta);
    return 0;
}

int maior(int num) {
    int k = 1;
    
    while ((k * k) <= num) {
        k++;
    }
    
    return k;
}