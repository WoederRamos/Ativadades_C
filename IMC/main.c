#include <stdio.h>
#include <stdlib.h>

int main()
{
   float Altura, KG, IMC;
   printf("Digite o KG: \n");
    scanf("%f", &KG);
   printf("Digite a Altura: \n");
   scanf("%f", &Altura);
   IMC = KG / (Altura * Altura);
   printf("O IMC sera = %.2f\n", IMC);
    return 0;
}
