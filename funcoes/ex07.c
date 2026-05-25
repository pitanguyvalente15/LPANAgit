#include <stdio.h>
#include <string.h>
int palindromo(char[]);

int main(){
    char palavra[100];
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra) - 1] = '\0';
    if(palindromo(palavra)){
        printf("Palindormo!");
    }
    else{
        printf("Nao eh um palindromo!");
    }
}

int palindromo(char palavra[]){
    for(int i = 0; i<strlen(palavra)/2; i++){
        if(palavra[i] != palavra[strlen(palavra)-1-i]){
            return 0;
        }
    }
    return 1;
}