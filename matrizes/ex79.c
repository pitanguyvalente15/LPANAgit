#include <stdio.h>

int main() {
    float notas[20], soma = 0, media;
    int i, acima = 0;

    for(i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 20;

    for(i = 0; i < 20; i++) {
        if(notas[i] > media) {
            acima++;
        }
    }

    printf("Media: %.2f\n", media);
    printf("Acima da media: %d\n", acima);

    return 0;
}