#include <stdio.h>
int main(){
    int i, soma = 0, cont = 0;
    for(i = 15; i<=100; i++){
        soma = soma + i;
        cont++;
    }
    printf("A media dos numeros entre 15 e 100 vale %d", soma/cont);
return 0;
}