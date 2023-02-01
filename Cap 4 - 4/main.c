#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, total;
    printf("Insira o valor do produto: \n");
    scanf("%f", &total);
    int pagamento;
    printf("Insira a forma de pagamento: \n1.A prazo\t2.A vista\n");
    scanf("%i", &pagamento);
    switch(pagamento){
case 1:
    valor = total ;
    printf("\nO valor total eh: %.3f", valor);
    break;
case 2:
    valor = (total * 0.90);
    printf("\nO valor total eh: %.3f", valor);
    break;
default:
    printf("Erro\n");
    }

    return 0;
}
