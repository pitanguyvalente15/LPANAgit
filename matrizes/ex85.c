#include <stdio.h>

#define M 10

int main(){
    float temp[M], maior, menor, soma = 0, media, cont = 0;

    for(int i=0; i<M; i++){
        printf("\nDigite um valor: ");
        scanf("%f", &temp[i]);
        soma += temp[i];
    }
    maior = temp[0];
    menor = temp[0];
    media = soma/M;

    for(int i=1; i<M; i++){
        if(maior >temp[i]){
            maior = temp[1];
        }
        if(menor < temp[i]){
            menor = temp[i];
        }
        if(temp[i]<media){
            cont++;
        }
    }
    printf("%.2f, %.2f, %.2f, %.2f", menor, maior, soma, media);
return 0;
}