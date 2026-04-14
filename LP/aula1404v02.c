#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main(){
    int vet[128], busca, cont=0;
    bool achei = false;

    srand(time(NULL));

    printf("vet: ");
    for(int i = 0; i<128; i++){
        vet[i] = rand()%100;
        printf("%d, ", vet[i]);
    }

    printf("Busca: ");
    scanf("%d", &busca);

    for(int i = 0; i<128; i++){
        if(vet[i] == busca){
            printf("Encontrado na posição %d\n", i);
            achei = true;
            //break;
        }
    }
    if(achei==false){
        printf("Não encontrado.");
    }
return 0;
}