#include <stdio.h>
#include <stdlib.h>

float real,dolar;
float txdolar = 5.37;

int main(void)
{
    printf("insira um valor em real R$");
    scanf("%f", &real);
    dolar = real / txdolar;

    printf("O valor convertido para dolar = U$ %.2f /n", dolar);

    return 0;
}
