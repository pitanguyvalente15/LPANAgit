#include <stdio.h>
void resto5(int, int);

int main(){
    int x, y;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);
    resto5(x, y);
    return 0;
}

void resto5(int x, int y) {
    int i;
    
    for (i = x + 1; i < y; i++) {
        if (i % 13 == 5) {
            printf("%d ", i);
        }
    }
    printf("\n");
}