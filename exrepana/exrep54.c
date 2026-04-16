#include <stdio.h>
int main(){
    int num, i;
    do{
        printf("Digite um numero: ");
        scanf("%d", &num);
    }while(num<=0);
    for(i = 0; i<num+1; i++){
        printf("%d ", i);
    }
return 0;
}