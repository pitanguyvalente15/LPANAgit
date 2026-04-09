#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a nota 1:");
    scanf("%f",&n1);
    while (n1<0 || n1>10){
        printf("\nNota inválida");
        printf("\nDigite um valor válido");
        printf("\nDigite novamente");
        printf("\nNota 1: ");
        scanf("%f",&n1);

    }
    printf("Digite a nota 2:");
    scanf("%f",&n2);
    while (n2<0 || n2>10){
        printf("\nNota inválida");
        printf("\nDigite um valor válido");
        printf("\nDigite novamente");
        printf("\nNota 2: ");
        scanf("%f",&n2);
    media = (n1 + n2)/2;
    if(media >= 6.0)
        printf("Aprovado");
    else
        printf("Reprovado");

    }
}