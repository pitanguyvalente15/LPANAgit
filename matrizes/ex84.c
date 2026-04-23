#include <stdio.h>

#define M 100

int main(){
    int a[M], b [M], soma[M];
    int n, i;

    printf("N (no máximo 100): ");
    scanf("%d", &n);
    while(n<1 || n>100){
        printf("N (valor máximo 100): ");
        scanf("%d", &n);
    }

    for(int i=0; i<n; i++){
        scanf("%d", &a[1]);
    }
    for(int i=0; i<n; i++){
        scanf("%d", &b[i]);
    }

    for(int i=0; i<n; i++){
        soma[i] = a[i] + b[i];
        printf("%d", soma[i]);
    }
}