#include <stdio.h>
int main(){
    int i, num;
    do{
        printf("Digite um numero entre 0 e 10: ");
        scanf("%d", &num);
    }while(num<=0 || num>10);
    for(i = 1; i<=10; i++){
        printf("%d x %d = %d\n", num, i, num*i);
    }
return 0;
}