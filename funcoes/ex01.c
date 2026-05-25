#include <stdio.h>
int multiplicacao(int , int );

int main(){
    int a, b, c;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    c = multiplicacao(a, b);
    printf("%d", c);
    return 0;
}

int multiplicacao(int a, int b){
    int produto = 0;
    int vezes = b;
    if(b<0){
        vezes = -b;
    }
    for(int i = 0; i<vezes; i++){
        produto += a;
    }
    if(b<0){
        produto = -produto;
    }
    return produto;
}