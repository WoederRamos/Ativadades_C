#include <stdio.h>
#include <stdlib.h>

int main()
{
   float valor_do_metro, metragem_prevista, valor_da_multiplicacao, Valor_total;
   int IT, PCA, TEC;

   printf("insira o valor do metro em R$: \n", valor_do_metro);
   scanf("%f", &valor_do_metro);
   printf("Insira a metragem prevista em m²: \n", metragem_prevista);
   scanf("%f", &metragem_prevista);

   valor_da_multiplicacao = valor_do_metro * metragem_prevista;

   printf("Inisira o IT 1- declive\t2- plano\t3- aclive: \n", IT);
   scanf("%d", &IT);

   switch(IT){
   case 1 : IT = valor_da_multiplicacao * 0.3;
   break;
   case 2 : IT = valor_da_multiplicacao * 0;
   break;
   case 3 : IT = valor_da_multiplicacao * 0.15;
   break;
   }

   printf("Insira a PCA 1- Minha casa minha vida\2- Padrão professor\t3- Padrão eng civil: \n", PCA);
   scanf("%d", &PCA);

   switch(PCA){
   case 1 : PCA = valor_da_multiplicacao * 28 / 100;
   break;
   case 2 : PCA = valor_da_multiplicacao * 10 / 100;
   break;
   case 3 : PCA = valor_da_multiplicacao * 0.25;
   break;
   }

   printf("Insira a TEC 1- Grande\t2- Reduzida: \n", TEC);
   scanf("%d", &TEC);

   switch(TEC){
   case 1 : TEC = valor_da_multiplicacao * 40 / 100;
   break;
   case 2 : TEC = valor_da_multiplicacao * 0.05;
   }
   Valor_total = valor_da_multiplicacao + IT + PCA + TEC;

   printf("O valor total é: %3.f R$\n", Valor_total);
    return 0;
}
