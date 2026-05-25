#include <stdio.h>

int tipotriangulo(int, int, int);

int main(){
    int a, b, c, tipo;
    printf("Digite o lado a do triangulo: ");
    scanf("%d", &a);
    printf("Digite o lado b do triangulo: ");
    scanf("%d", &b);
    printf("Digite o lado c do triangulo: ");
    scanf("%d", &c);
    tipo = tipotriangulo(a, b, c);
    printf("O tipo do triangulo eh esse: %d", tipo);
    return 0;
}

int tipotriangulo(int a, int b, int c) {

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        return 0; 
    }
    if (a == b && b == c) {
        return 1; 
    } 
    else if (a == b || a == c || b == c) {
        return 2; 
    } 
    else {
        return 3; 
    }
}