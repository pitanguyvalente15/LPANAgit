#include <stdio.h>

int main() {
    float media;

    printf("Digite sua média:");
    scanf("%f",&media);
    while(media<0 || media > 10){
        printf("Média inválida! Digite sua média novamente");
        printf("\nMédia: ");
        scanf("%f", &media);
    }
    if(media >= 6.0)
        printf("Aprovado");
    else
        printf("Reprovado");
}
