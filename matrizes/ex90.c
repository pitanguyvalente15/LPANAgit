#include <stdio.h>

int main() {
    int v[30], i, x, cont = 0;

    for(i = 0; i < 30; i++) scanf("%d", &v[i]);

    scanf("%d", &x);

    for(i = 0; i < 30; i++) {
        if(v[i] == x) cont++;
    }

    printf("Aparece %d vezes\n", cont);

    return 0;
}