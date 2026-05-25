#include <stdio.h>


int romano(int num) {
    
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *simbolos[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    int i = 0;

   
    while (num > 0) {
        
        if (num >= valores[i]) {
            printf("%s", simbolos[i]); 
            num = num - valores[i];    
        } else {
            i++; 
    }

    }
    return 0;
}
int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("O numero %d em romano eh: ", numero);
    romano(numero);

    return 0;
}