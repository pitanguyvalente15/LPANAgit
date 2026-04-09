#include <stdio.h>
int main(){
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    while (n<=0){
        printf("N: ");
        scanf("%d", &n);
    }
    for(i = 1; i<=n; i++);
        printf("%d, ", &i);
return 0;
}