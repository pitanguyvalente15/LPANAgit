#include <stdio.h>
int fat(int );

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("O fatorial desse numero vale: %d", fat(num));
    return 0;
}

int fat(int num){
    if(num==0 || num == 1)
        return 1;
    else
        return num*fat(num-1);
}