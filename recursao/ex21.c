#include <stdio.h>
int sequencia21(int n);
int main(){
    int num;
    printf("Digite um numero:");
    scanf("%d", &num);
    printf("Resultado: %d", sequencia21(num));
    return 0;
}
int sequencia21(int n) {
    if (n == 1) 
        return 1;
    if (n == 2) 
        return 2;
    return 2 * sequencia21(n - 1) + 3 * sequencia21(n - 2);
}