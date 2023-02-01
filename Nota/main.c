#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Nota;
    printf("Insira uma nota de 0 a 10: \n");
    scanf("%f", &Nota);
    if(Nota >= 7)
    {
    printf("Parabens voce passou!!!\n");
    }
    else
    {
        printf("Voce foi reprovado\n");
    }



    return 0;
}
