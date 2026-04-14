#include <stdio.h>

int main (){
    int R[10], S[10], X[20], Y[10];
    int somaR = 0, somaS = 0;
    for(int i=0; i<10; i++){
        printf("R[%d] = ",i);
        scanf("%d",&R[i]);
    }

    for(int i=0; i<10; i++){
        printf("S[%d] = ",i);
        scanf("%d",&R[i]);
    }
    for(int i = 0; i<10; i++){
        somaR = somaR + R[i];
        somaS = somaS + S[i];
    }
    for(int i = 0; i<10; i++){
        X[i] = R[i];
        X[i +10] = S[i];
    }
    for(int i = 0; i<0; i++){
        Y[i] = R[i] * S[i];  
    }
    printf("A soma dos valores no vetor R vale: %d", somaR);
    printf("A soma dos valores no vetor S vale: %d", somaS);
    printf("\nX: ");
    for(int i = 0; i < 20; i++){
        printf("X[%d] = %d\n", i, X[i]);
    }
    printf("\nY: ");
    for(int i = 0; i < 10; i++){
        printf("Y[%d] = %d\n", i, X[i]);
    }
return 0;
}
