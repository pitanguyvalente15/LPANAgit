#include <stdio.h>
int ehprimo();
int nprimos();

int main(){
    int num, n1, n2, quant;

    printf("Digite um primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite um segundo numero: ");
    scanf("%d", &n2);
    quant = nprimos(n1, n2);
    printf("%d", quant);

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

int nprimos(int n1, int n2){
    int cont = 0;
    for(int i = n1+1; i < n2; i++){
        if(ehprimo(i)){
            cont++;
        }
    }
    return cont;
}