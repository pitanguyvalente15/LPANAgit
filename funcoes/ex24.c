#include <stdio.h>

int fatorial(int);
int combinacao(int, int);

int main(){
    int n, r, resp;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite outro numero: ");
    scanf("%d", &r);
    resp = combinacao(n, r);
    printf("Combinacoes: %d", resp);
    return 0;
}

int fatorial(int k) {
    int fat = 1;
    int i;
    for (i = 1; i <= k; i++) {
        fat = fat * i;
    }
    return fat;
}

int combinacao(int n, int r) {
    if (r > n || r < 0) {
        return 0; 
    }
    
    int resultado = fatorial(n) / (fatorial(r) * fatorial(n - r));
    return resultado;
}