#include <stdio.h>
int ehprimo();

int main(){
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if(ehprimo(num)){
        printf("O numero eh primo!");
    }
    else{
        printf("O numero nao eh primo!");
    }
    return 0;
}

int ehprimo(int num){
    if(num==1 || num == 0 || num<0){
        return 0;
    }
    for(int i = 2; i<num; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}