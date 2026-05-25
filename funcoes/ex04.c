#include <stdio.h>
int inverte(int);

int main(){
    int num, inv;
    printf("Digite um numero: ");
    scanf("%d", &num);
    inv = inverte(num);
    printf("%d", inv);
    return 0;
}

int inverte(int num){
    int invertido = 0, digito;
    while(num!=0){
        digito = num%10;
        invertido = (invertido*10) + digito;
        num = num/10;
    }
    return(invertido);
}
