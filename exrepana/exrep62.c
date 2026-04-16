#include <stdio.h>
int main(){

    int i, alunos;
    float nota, soma = 0;
    printf("Digite o numero de alunos na classe: ");
    scanf("%d", &alunos);
    for(i = 0; i<alunos; i++){
        printf("Digite a nota dos alunos: ");
        scanf("%f", &nota);
        soma = soma + nota;
    }

    printf("A media da nota desses alunos vale: %.2f", soma/alunos);

return 0;
}