#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("conversor de temperatura - Celsius/Kelvin\n");

    printf("\nInsira uma temperatura em graus Celsius:");

    float cel, kel;
    scanf("%f", &cel);
    kel = cel + 273;

    printf("\nEsta temperatura corresponde em graus Kelvin à: %.2f", kel);

    return 0;
}
