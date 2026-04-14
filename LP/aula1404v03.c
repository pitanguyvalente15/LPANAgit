#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int lancamento[6] = {0, 0, 0, 0, 0, 0};
    int dado, n;

    printf("DIgite o número de lançamentos: ");
    scanf("%d", &n);

    for(int i =0; i<n; i++){
        dado = rand()%6 + 1;
        lancamento[dado-1]++;
        /*
        switch(dado){
            case 1:
                lancamento[0]++;
                break;
            case 2:
                lancamento[1]++;
                break;
            case 3:
                lancamento[2]++;
                break;
            case 4:
                lancamento[3]++;
                break;
            case 5:
                lancamento[4]++;
                break;
            case 6:
                lancamento[5]++;
                break;
            default:
                break;
        }
        */
        for(int i = 0; i<6; i++){
            printf("\nFace %d: %d vezes", i+1, lancamento[i]);
            printf("\n%.1f %%", ((float)lancamento[i]/n));
        }
    }
return 0;
}