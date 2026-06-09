#include <stdio.h>
int fatdup(int n);
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O fatorial duplo desse numero vale: %d", fatdup(num));
    return 0;
}

int fatdup(int n) {
    if (n <= 1) 
       return 1;
    return n * fatdup(n - 2);
}