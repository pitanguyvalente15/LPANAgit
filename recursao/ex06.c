#include <stdio.h>
int multip_rec(int, int);
int main(){
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    printf("O produto dos dois numeros digitados vale: %d", multip_rec(num1, num2));
    return 0;
}
int multip_rec(int num1, int num2){
    if(num2 == 1)
        return num1;
    else
        return num1 + multip_rec(num1, num2-1);
}