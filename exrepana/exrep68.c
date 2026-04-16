#include <stdio.h>
int main(){
    int nmerc, i;
    float soma = 0, valmerc;
    printf("Digite o numero de mercadorias no estoque: ");
    scanf("%d", &nmerc);
    for(i = 0; i<nmerc; i++){
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valmerc);
        soma = soma + valmerc;
    }
    printf("O valor total em estoque vale: %.2f\nA media do valor das mercadorias vale: %.2f", soma, soma/nmerc);
return 0;
}