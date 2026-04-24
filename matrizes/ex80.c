#include <stdio.h>

int main() {
    int v[20], i, maior, pos;

    for(i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }

    maior = v[0];
    pos = 0;

    for(i = 1; i < 20; i++) {
        if(v[i] > maior) {
            maior = v[i];
            pos = i;
        }
    }

    printf("Maior: %d\nPosicao: %d\n", maior, pos);

    return 0;
}