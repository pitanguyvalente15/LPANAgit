#include <stdio.h>
int serieS(int n, int par, int cont, int resultado);
int main(){
    int num = 1, limite, cont = 0, resultado = 2;
    printf("Digite um numero: ");
    scanf("%d", &limite);
    printf("O resultado da serie S vale: %d", serieS(num, limite, cont, resultado));
    return 0;
}
int serieS(int n, int par, int cont, int resultado){
    if(n==par)
        return resultado;
    serieS(n + 1, par, cont, (1 + (n*n))/n);
}