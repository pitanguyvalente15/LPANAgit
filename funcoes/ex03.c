#include <stdio.h>
int potencia(int, int);

int main(){
    int base, expo, pot;
    printf("\nDigite a base da potencia: ");
    scanf("%d", &base);
    printf("\nDigite o expoente da potencia: ");
    scanf("%d", &expo);
    pot = potencia(base, expo);
    printf("A potencia dos dois numeros digitados vale: %d", pot);
    return 0;
}

int potencia(int base, int expo){
    int valor;
    valor = base;
    for(int i = 0; i<expo-1; i++){
        valor = valor*base;
    }
    return(valor);
}