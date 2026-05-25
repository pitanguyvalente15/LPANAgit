#include <stdio.h>

void binario(int);

int main(){
    int num, resposta;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("Seu numero em binario vale: ");
    binario(num);
    return 0;
}

void binario(int num) {
    int restos[32];
    int i = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        restos[i] = num % 2;
        num = num / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", restos[j]);
    }
    printf("\n");
}
