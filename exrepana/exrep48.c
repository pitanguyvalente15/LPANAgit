#include <stdio.h>

int main() {

float a1 = 11, a2 = 11;

while(a1<0 || a1>10){
    printf("Digite a nota da sua primeira avaliacao: ");
    scanf("%f", &a1);
}
while(a2<0 || a2>10){
    printf("Digite a nota da sua segunda avaliacao: ");
    scanf("%f", &a2);
}
printf("A media das suas duas nota vale: %.2f", (a1+a2)/2);
return 0;
}