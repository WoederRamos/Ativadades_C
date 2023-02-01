#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2;
    printf("Digite o num1: ");
    scanf("%i", &num1);

    printf("Digite o num2: ");
    scanf("%i", &num2);


    if (num1 >= num2 && num1 % num2 == 0)
        {
      printf("Os numeros 1 e 2 sao multiplos\n");
    }
    else
        printf("Os numeros 1 e 2 nao sao multiplos");
    return 0;
}
