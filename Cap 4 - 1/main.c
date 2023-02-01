#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, total;
   printf("Insira o valor total: \n");
   scanf("%f", &total);
   int indentidade;
   printf("Digite sua indentidade: \n1.cliente\t 2.cliente vip\t 3.funcionario\n\n");
   scanf("%i", &indentidade);

   switch(indentidade)
   {case 1:
       valor = total/1;
       printf("\n Valor a ser pago e: %.3f", valor);
       break;
   case 2:
    valor = (total * 0.95);
    printf("\n Valor a ser pago e: %.3f", valor);
    break;
   case 3:
       valor = (total * 0.90);
       printf("\n Valor a ser pago e: %.3f", valor);
       break;

   default:
       printf("erro");

   }
   return 0;
}
