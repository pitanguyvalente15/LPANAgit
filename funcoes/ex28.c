#include <stdio.h>
void fibonacci(int);

int main(){
    int termos;
    printf("Digite o numero de termos desejados: ");
    scanf("%d", &termos);
    fibonacci(termos);
}

void fibonacci(int termos) {
    int t1 = 0, t2 = 1;
    int proximo;
    int i;
    
    for (i = 1; i <= termos; i++) {
        printf("%d ", t1);
        
        proximo = t1 + t2; 
        t1 = t2;           
        t2 = proximo;      
    }
    printf("\n");
}