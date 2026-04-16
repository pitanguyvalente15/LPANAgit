#include <stdio.h>
int main(){
    int num, i;
    printf("Digite um numero: ");
    scanf("%d ", &num);
    for(i = 1; i < num + 1; i++){
        printf("%d ", i);
    }
return 0;
}