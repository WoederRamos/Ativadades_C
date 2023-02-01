#include <stdio.h>

/* Professor dei ctrl c ctrl v em quase todas as questões, ainda preciso me aprofundar mais no assunto, fico devendo
para o senhor respostas do meu própio entendimento, vim compreender um pouco mais o assunto na sua ultima aula explicando o
gabarito, irei reassistir a aula e espero atualizar a lista no ava em breve, desde já peço desculpas! */

float potencia (float, int);
float investimento_AporteMensal (float aporteMensal, float jurosMensal, int quantMeses);

int main()
{
    float aporteMensal, jurosMensal;
    int quantMeses;
    printf("Codigo para testar a funcao - juros compostos \n");
    printf("entre com um valor do montante: ");
    scanf ("%f", &aporteMensal);
    printf("\n");
    printf("entre com a taxa de juros mensal no formato 2,5%% ao mes - 0.025: ");
    scanf ("%f", &jurosMensal);
    printf("\n");
    printf("entre com a quantidade de meses: ");
    scanf ("%d", &quantMeses);

    printf ("O valor do investimento considerando os parâmetros = %.2f", investimento_AporteMensal(aporteMensal, jurosMensal, quantMeses));
    return 0;
}

float investimento_AporteMensal (float aporteMensal, float jurosMensal, int quantMeses)
{
  float p1 = potencia ((1+jurosMensal),quantMeses);
  float p2 = (p1 - 1)/jurosMensal;
  float p3 = aporteMensal * p2;
  return (p3);
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
