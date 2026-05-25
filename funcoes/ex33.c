#include <stdio.h>

void divisores(int);

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    divisores(num);
    return 0;
}

void divisores(int num){
    printf("Os divisores desse numero sao: ");
    for(int i = 1; i<=num; i++){
        if(num%i==0){
            printf("%d ", i);
        }
    }
}
