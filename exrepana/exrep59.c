#include <stdio.h>
int main(){
    int i, num, ne = 0;

    for(i= 0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num<0){
            ne++;
        }
    }
    printf("A quantidade de numeros negativos: %i", ne);
return 0;
}