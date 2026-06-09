#include <stdio.h>
int SomaSerie(int i, int j, int k, int cont, int soma);
int main(){
    int i, j, k, cont = 0, soma = 0;
    printf("Digite o numero i: ");
    scanf("%d", &i);
    printf("Digite o numero j: ");
    scanf("%d", &j);
    printf("Digite o numero k: ");
    scanf("%d", &k);
    printf("e a soma da serie de valores do intervalo [i,j], com incremento k, vale: %d", SomaSerie(i, j, k, cont, soma));
}
int SomaSerie(int i, int j, int k, int cont, int soma){
    if(i == j)
        return soma;
    if(cont == 0)
        soma = k;
    cont++;
    SomaSerie(i+1, j, k, cont, soma + i);
}