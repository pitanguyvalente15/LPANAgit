#include <stdio.h>
int main(){

    int i, num, soma = 0;
    for(i=0; i<10; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num<40){
            soma = soma + num;
        }
    }

    printf("A soma dos numeros inferiores a 40 vale: %d", soma);

return 0;
}