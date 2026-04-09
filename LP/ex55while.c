#include <stdio.h>
int main(){
    int n;
    int cont = 1;
    printf("N: ");
    scanf("%d", &n);
    while(cont<10){
        printf("%d x %d = %d\n", cont,n,cont*n);
        cont = cont + 1;
    }
return 0;
}