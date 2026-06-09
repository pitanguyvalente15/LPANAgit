#include <stdio.h>
int soma(int);

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("A soma de 1 ao numero digitado vale: %d", soma(num));
    return 0;
}

int soma(int num){
    if(num==0 || num==1){
        return num;
    }
    else{
        return num + soma(num-1);
    }
}