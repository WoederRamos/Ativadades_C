#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("caucular a área da circuferencia/n");

    printf("\nInsira um valor do raio: ");

    float raio, pi, area;

    pi = 3,14;

    scanf("%f", &raio);

    area = pi *(raio *raio);

    printf("\nA área da circuferência é: %.2f", area);

    return 0;
}
