#include <stdio.h>
int main(){
    int i, num, dentro = 0, fora = 0;
    for(i=0; i<10; i++){
        printf("Digite um numero:");
        scanf("%d", &num);
        if(num>=10 && num<=20){
            dentro++;
        }
        else{
            fora++;
        }
    }
    printf("%d numeros estao entre 10 e 20 e %d numeros estao fora desse intervalo", dentro, fora);
return 0;
}