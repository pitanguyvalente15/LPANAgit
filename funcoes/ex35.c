#include <stdio.h>
int mstrlen(char[]);
int mstrcmp(char[], char[]);
void mstrcat(char[], char[]);

int main() {
    char txt1[50] = "Logica de programacao";
    char txt2[50] = " professora Ana Luisa";
    char copia[50];

    printf("Tamanho de '%s': %d\n", txt1, mstrlen(txt1));

    printf("Comparando '%s' com 'Logica de programacao': %d\n", txt1, mstrcmp(txt1, "Logica de programacao"));

    mstrcat(txt1, txt2);
    printf("Texto concatenado: %s\n", txt1);

    return 0;
}


int mstrlen(char str[]) {
    int tam = 0;
    while (str[tam] != '\0') {
        tam++;
    }
    return tam;
}

int mstrcmp(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; 
        }
        i++;
    }
    return str1[i] - str2[i]; 
}

void mstrcat(char destino[], char origem[]) {
    int i = 0;
    int j = 0;
    
    while (destino[i] != '\0') {
        i++;
    }
    
    while (origem[j] != '\0') {
        destino[i] = origem[j];
        i++;
        j++;
    }
    destino[i] = '\0'; 
}
