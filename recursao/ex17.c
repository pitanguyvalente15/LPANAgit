#include <stdio.h>
long long fatqua(int n);
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("%lld", fatqua(num));
    return 0;
}
long long fatqua(int n){
    if (n <= 0) 
        return 1;
    return 2 * (2 * n - 1) * fatqua(n - 1);
}