#include <stdio.h>
int main(){
    int nmerc = 0;
    float valmerc, soma = 0;
    char mais = 'S';
    do{
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valmerc);
        soma = soma +valmerc;
        nmerc++;
        printf("Mais mercadorias (S/N)? ");
        scanf(" %c", &mais);
    }while(mais == 'S');
    printf("O valor total em estoque vale: %.2f e a media do valor das mercadorias vale: %.2f", soma, soma/nmerc);
}