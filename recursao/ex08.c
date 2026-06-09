#include <stdio.h>
void dec(int, int);
int cont = 0;
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    dec(cont, num);
    return 0;
}
void dec(int cont, int num){
    if(cont == num)
        printf("%d\n", cont);
    else{
        cont++;
        dec(cont, num);
        printf("%d\n", cont);        
}
}