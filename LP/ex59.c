#include <stdio.h>

int main(){
    int n;
    int cont = 0;
    for (int i=0; i<10; i++){
        printf("%d", n);
        if(n<0)
            cont++;
    }
    printf("%d números negativos.", cont);
}