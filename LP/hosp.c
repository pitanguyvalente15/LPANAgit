#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    typedef struct{
        int idade;
        float peso;
        char nome[30];
    }pessoas;

    pessoas paciente[5];
    for(int i = 0; i<5; i++){
        printf("\nDigite o nome do paciente %d: ", i+1);
        fgets(paciente[i].nome, sizeof(paciente[i].nome), stdin);
        printf("\nDigite a idade do paciente %d: ", i+1);
        scanf("%d", &paciente[i].idade);
        printf("\nDigite o peso do paciente %d: ", i+1);
        scanf("%f", &paciente[i].peso);
        getchar();
    }

    printf("\nPacientes salvos na lista: ");
    for(int i = 0; i<5; i++){
        printf("\nPaciente %d", i+1);
        printf("\nNome: %s", paciente[i].nome);
        printf("\nIdade: %d", paciente[i].idade);
        printf("\nPeso: %f\n", paciente[i].peso);

    }
    return 0;
}