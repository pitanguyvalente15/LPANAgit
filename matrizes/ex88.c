#include <stdio.h>

int main() {
    int v[20], novo[20], i, x, j = 0;

    for(i = 0; i < 20; i++) scanf("%d", &v[i]);

    scanf("%d", &x);

    for(i = 0; i < 20; i++) {
        if(v[i] != x) {
            novo[j] = v[i];
            j++;
        }
    }

    for(i = 0; i < j; i++) {
        printf("%d ", novo[i]);
    }

    return 0;
}