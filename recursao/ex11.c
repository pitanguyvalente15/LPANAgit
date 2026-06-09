#include <stdio.h>
void func(int vet[], int tamanho, int indice);
int main(){
    int vetor[10], tamanho = 10, indice = 0;
    for(int i = 0; i<10; i++){
        printf("Digite um numero qualquer: ");
        scanf("%d", &vetor[i]);
    }
    func(vetor, tamanho, indice);
    return 0;
}
void func(int vet[], int tamanho, int indice){
    if(indice==tamanho)
        return;
    printf("%d ", vet[indice]);
    func(vet, tamanho, indice + 1);
}