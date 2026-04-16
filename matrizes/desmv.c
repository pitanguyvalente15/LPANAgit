#include <stdio.h>
int main(){
    int MA[3][4];
    int VE[3] = {0,0,0};
    int X = 0;
    int soma = 0;
    //lendo uma matriz de inteiros com 3 linhas e 4 colunas
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("A[%d][%d]", i, j);
            scanf("%d", &MA[i][j]);
        }
    }
    //imprimindo a matriz
    printf("\nA sua matriz ficou assim:\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("\t%d", MA[i][j]);
        }
        printf("\n");
    }
    //aplicando a soma das linhas ao vetor
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            VE[i] = VE[i] + MA[i][j];
        }
    }
    //imprimindo o vetor
    for(int i = 0; i<3; i++){
        printf("\n%d", VE[i]);
    }
    //aplicando a soma dos vetores no inteiro X
    for(int i = 0; i<3; i++){
        X = X + VE[i];
    }
    //imprimindo o valor do inteiro X
    printf("\n%d", X);

return 0;
}