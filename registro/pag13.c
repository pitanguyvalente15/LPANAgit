#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
}Aluno;

void imprimeMenu();
void insereAluno(Aluno[], int, int);
int buscaRA(Aluno[], int, int);
void imprimeTurma(Aluno[], int);
int removeAluno(Aluno[], int*, int);

int main(){
    int op=0;
    Aluno turmaLP[3];
    int n=0, RA;

    while(op!=5){
        system("cls");
        imprimeMenu();
        scanf("%d", &op);
        switch(op){
            case 1:
                if(n==50)
                    printf("\nTurma Lotada!\n");
                else{
                    printf("\nRA: ");
                    scanf("%d",&RA);
                    getchar();
                    if(!buscaRA(turmaLP,n,RA)){
                        insereAluno(turmaLP,n,RA);
                        n++;
                    }
                    else{
                        printf("\nRA já existe.\n");
                    }
                }
                break;
            case 2:
                if(n==0){
                    printf("\nTurma vazia!\n");
                }
                else{
                    imprimeTurma(turmaLP,n);
                }
                break;
            case 3:
                if(n==0){
                    printf("Nao ha a possibilidade de remover alunos, pois a turma esta vazia");
                }
                else{
                    printf("Digite o RA do aluno a ser removido:");
                    scanf("%d", &RA);
                    getchar();
                    if(removeAluno(turmaLP, &n, RA)){
                        printf("\nAluno removido!");
                    }
                    else 
                        printf("\nAluno com RA %d nao encontrado", RA);
                }
            case 5:
                printf("\nTchau!");
                break;
            default:
                printf("\nOpção incorreta.");
                break;
        }
    }
}


void imprimeMenu(){
    printf("\nMENU:");
    printf("\n1 - Inserir aluno:");
    printf("\n2 - Imprime Turma: ");
    printf("\n3 - Remover Aluno:");
    printf("\n5 - Sair");
    printf("\nOpcao: ");
}
void insereAluno(Aluno tLP[],int n,int RA){
    printf("\nNome: ");
    fgets(tLP[n].nome,sizeof(tLP[n].nome),stdin);
    tLP[n].nome[strlen(tLP[n].nome)-1] = '\0';
    tLP[n].RA = RA;
    printf("RA: %d\n",tLP[n].RA);
    for(int i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&tLP[n].notas[i]);
    }
    printf("Frequencia: ");
    scanf("%d",&tLP[n].frequencia);
}

int buscaRA(Aluno tLP[],int n,int RA){
    for(int i=0;i<n;i++){
        if(RA==tLP[i].RA)
            return 1;
    }
    return 0;
}

void imprimeTurma(Aluno tLP[],int n){
    for(int i=0;i<n;i++){
        printf("\nAluno %d",i+1);
        printf("\nNome: %s",tLP[i].nome);
        printf("\nRA: %d",tLP[i].RA);
        for(int j=0;j<3;j++){
            printf("\nNota %d: %.1f",j+1,tLP[i].notas[j]);
        }
        printf("\nPresenca: %d\n",tLP[i].frequencia);
    }
    getchar();
    getchar();
}

int removeAluno(Aluno tLP[], int *n, int RA) {
    int encontrado = -1;
    int i;
    for (i = 0; i < *n; i++) {
        if (tLP[i].RA == RA) {
            encontrado = i; 
            break;
        }
    }
    if (encontrado == -1) {
        return 0; 
    }
    for (i = encontrado; i < (*n) - 1; i++) {
        tLP[i] = tLP[i + 1];
    }
    (*n)--; 
    return 1; 
}