#include <stdio.h>

int main() {
    int v[20], i, menor, pos;

    for(i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }

    menor = v[0];
    pos = 0;

    for(i = 1; i < 20; i++) {
        if(v[i] < menor) {
            menor = v[i];
            pos = i;
        }
    }

    printf("Menor: %d\nPosicao: %d\n", menor, pos);

    return 0;
}