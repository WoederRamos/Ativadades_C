#include <stdio.h>

float potencia (float, int);
float investimento (float valorInicial, float jurosMensal, int quantMeses);

int main()
{
    float valorInicial, jurosMensal;
    int quantMeses;
    printf("Codigo para testar a funcao - juros compostos \n");
    printf("entre com um valor do montante: ");
    scanf ("%f", &valorInicial);
    printf("\n");
    printf("entre com a taxa de juros mensal no formato 2,5%% ao mes - 0.025: ");
    scanf ("%f", &jurosMensal);
    printf("\n");
    printf("entre com a quantidade de meses: ");
    scanf ("%d", &quantMeses);

    printf ("O valor do investimento considerando os parâmetros = %.2f", investimento(valorInicial, jurosMensal, quantMeses));
    return 0;
}

float investimento (float valorInicial, float jurosMensal, int quantMeses)
{
   return (valorInicial*(potencia((1+jurosMensal),quantMeses)));

}
float potencia (float base, int expoente)
{

    float resultado = 1.0;
    if (expoente == 0)
    {
        return resultado;
    } else if (expoente >0)
    {
        int i;
        for (i=0; i<expoente; i++)
        {
            resultado = resultado * base;
        }
    }
    return resultado;
}
