#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 20

int main(){
    int vet[M], cont = 0;

    srand(time(NULL));
    for(int i=0; i<M; i++){
        vet[i] = rand()%100;
        printf("%d, ", vet[i]);
    }

    for(int i=0; i<M; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(vet[i]==vet[j]){
                if(i>j){
                    break;
                }
                printf("\n%d repete na posição %d", vet[i], j);
            }
        }
    }
    
return 0;
}