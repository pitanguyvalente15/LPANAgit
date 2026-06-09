#include <stdio.h>
int expo(int, int);
int main(){
    int base, elev;
    printf("Digite um numero: ");
    scanf("%d", &base);
    printf("Digite o numere ao qual ele sera elevado: ");
    scanf("%d", &elev);
    printf("O resultado vale: %d", expo(base, elev));
    return 0;
}
int expo(int base, int elev){
    if(elev == 1)
        return base;
    else
        return base * expo(base, elev-1);
}