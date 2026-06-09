#include <stdio.h>
void pri(int);
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    pri(num);
    return 0;
}
void pri(int num){
    if(num == 0)
        printf("%d\n", num);
    else{
        pri(num-1);
        if(num%2==0)
            printf("%d\n", num);
}
}