#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *star = "*";
    int a, b, dimensao;
    while(dimensao != -1){
        printf("Insira o tamanho do quadrado(digite -1 para encerrar o programa): ");
        scanf("%d", &dimensao);
        if(dimensao == -1){
            break;
        }
        for(a = 0; a < dimensao; a++){
            for(b = 0; b < dimensao; b++){
                printf(star);
            }
        }
        printf("\n");
    }
    return 0;
    }
