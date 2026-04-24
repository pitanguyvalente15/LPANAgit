#include <stdio.h>

int main() {
    int A[10], M[10], X, i;

    for(i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);

    for(i = 0; i < 10; i++) {
        M[i] = A[i] * X;
        printf("%d ", M[i]);
    }

    return 0;
}