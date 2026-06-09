#include <stdio.h>
int fib(int);
int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    printf("A sequencia de fibonacci desse numero vale: %d", fib(num));
    return 0;
}
int fib(int num){
    if(num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return fib(num-1) + fib(num-2);
}