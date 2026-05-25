#include <stdio.h>
int fatorial(int);

int main(){
    int num, fat;
    printf("Digite um numero: ");
    scanf("%d", &num);
    fat = fatorial(num);
    printf("O fatorial do numero dado vale : %d", fat);

    return 0;
}

int fatorial(int num){
    int resultado = 1;
    for(int i = num; i>0; i--){
        resultado = resultado * i;
    }
    return(resultado);
}