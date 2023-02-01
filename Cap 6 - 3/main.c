#include <stdio.h>

int fatorial (int);
float serie (int);
int main()
{
    int valor;
    printf("Entre com o valor de N: ");
    scanf ("%d", &valor);
    printf("O valor do fatorial de %d = %.2f", valor, serie (valor));
    return 0;
}
int fatorial (int valor)
{   int resultado = 1;
    int i;
    if ((valor == 0) || (valor ==1))
        return resultado;
    else
    {
        for (i=2;i<=valor;i++ )
        {
            resultado = resultado * i;
        }
    }
    return resultado;
}

float serie (int valor)
{
    float resultado = 0.0;
    int i;
    for (i = 0 ; i <= valor; i++)
     {
         resultado = resultado + 1.0/fatorial (i);

     }
    return resultado;

}
