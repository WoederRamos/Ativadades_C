#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    printf("caucular a �rea da circuferencia/n");

    printf("\nInsira um valor do raio: ");

    float raio, pi, area;

    pi = 3,14;

    scanf("%f", &raio);

    area = pi *(raio *raio);

    printf("\nA �rea da circufer�ncia �: %.2f", area);

    return 0;
}
