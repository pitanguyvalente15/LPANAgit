#include <stdio.h>
void ImprimeSerie(int i, int j, int k);
int main(){
    int num1, num2, num3;
    printf("Digite o numero num1: ");
    scanf("%d", &num1);
    printf("Digite o numero num2: ");
    scanf("%d", &num2);
    printf("Digite o numero num3: ");
    scanf("%d", &num3);
    ImprimeSerie(num1, num2, num3);
}
void ImprimeSerie(int i, int j, int k){
    if(i==j)
        return;
    printf("%d\n", i+k);
    ImprimeSerie(i+1, j, k);
}