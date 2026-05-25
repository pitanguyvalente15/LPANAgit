#include <stdio.h>
int divisao(int, int);

int main(){
    int a, b, q;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    q = divisao(a, b);
    printf("\n%d", q);

    return 0;
}

int divisao(int a, int b){
    int resultado, valor;
    if(a<b){
        resultado = 0;
    }
    else{
        resultado = 1;
    }
    valor = b;
    printf("\n");
    while(valor<a){
        valor += b;
        resultado +=1;

    }
    return (resultado);
}