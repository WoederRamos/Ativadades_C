#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, num2, num3, num4, num5;
    while(numero != -1){

        printf("Insira um numero de cinco digitos(Insira -1 para encerrar): \n");
        scanf("%d", &numero);
        if(numero == -1){
            break;
        }
        num2 = numero/10000;
        num3 = numero%10000/1000;
        num4 = numero%100/10;
        num5 = numero%10;
        if(num2 == num5 && num3 == num4){
            printf("O numero é palindromo.\n");
        }
        else{
            printf("O numero não é palindromo.\n");
        }

    }
    return 0;
}
