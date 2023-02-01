#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Insira um valor: \n");

    scanf("%i", &numero);

    if(numero % 2 == 0)
        {
        printf("O valor digitado e par\n");
    }
    else
    {
        printf("O valor digitado e impar\n");
    }

    return 0;
}
