#include <stdio.h>

int main() {
    int v1[15], v2[15], i, cont = 0;

    for(i = 0; i < 15; i++) scanf("%d", &v1[i]);
    for(i = 0; i < 15; i++) scanf("%d", &v2[i]);

    for(i = 0; i < 15; i++) {
        if(v1[i] == v2[i]) cont++;
    }

    printf("Quantidade: %d\n", cont);

    return 0;
}