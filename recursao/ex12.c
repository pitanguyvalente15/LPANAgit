#include <stdio.h>
void func(int vet[], int tamanho, int indice, int maior);
int main(){
    int vetor[10], tamanho = 10, indice = 0;
    for(int i=0; i<10; i++){
        printf("Digite um numero qualquer: ");
        scanf("%d", &vetor[i]);
    }
    int maior = vetor[0];
    func(vetor, tamanho, indice, maior);
    return 0;
}

void func(int vet[], int tamanho, int indice, int maior){
    if(indice==tamanho){
        printf("%d", maior);    
        return;
    }
    if(vet[indice] > maior){
        maior = vet[indice];
    }
    func(vet, tamanho, indice + 1, maior);
}