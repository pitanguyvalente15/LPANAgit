#include <stdio.h>

int main() {
    int v[20], i;

    for(i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
    }

    for(i = 19; i >= 0; i--) {
        printf("%d ", v[i]);
    }

    return 0;
}