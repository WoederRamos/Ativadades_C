#include <stdio.h>
#include <stdlib.h>

int main()
{
   float capital, taxa, dias, juros;
   while(capital != -1){

    printf("Informe o valor do emprestimo(digite -1 para encerrar o programa): \n", capital);
   scanf("%f", &capital);
   if(capital == -1){
    break;
   }
   printf("Informe a taxa: \n", taxa);
   scanf("%f", &taxa);
   printf("Informe o periodo de dias: \n", dias);
   scanf("%f", &dias);
   juros = capital * taxa * dias / 365;
   printf("O valor dos juros é: $%2.f\n", juros);
   }
    return 0;
}
