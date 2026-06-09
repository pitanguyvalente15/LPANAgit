#include <stdio.h>
#include <math.h>
int cubo(int);
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("A soma dos numeros ao cubo ate o numero digitado vale: %d", cubo(num));
    return 0;
}
int cubo(int num){
    int num3;
    if(num == 1)
        return 1;
    else{
        num3 = pow(num, 3);
        return num3 + cubo(num-1);
    }
}