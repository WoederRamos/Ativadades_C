#include <stdio.h>
#include <stdlib.h>

int main()
{
int mes;
printf("digite o numero do mes: \n");
scanf("%i", &mes);
switch(mes){
case 1:
    mes = 1;
    printf("O mes digitado eh Janeiro\n");
    break;
case 2:
    mes = 2;
    printf("O mes digitado eh Fevereiro\n");
    break;

case 3:
    mes = 3;
    printf("O mes digitado eh Marco\n");
    break;

case 4:
    mes = 4;
    printf("O mes digitado eh Abril");
    break;
case 5:
    mes = 5;
    printf("O mes digitado eh Maio\n");
    break;
case 6:
    mes = 6;
    printf("O mes digitado eh Junho\n");
    break;
case 7:
    mes = 7;
    printf("O mes digitado eh Julho\n");
    break;
case 8:
    mes = 8;
    printf("O mes digitado eh Agosto\n");
    break;
case 9:
    mes = 9;
    printf("O mes digitado eh Setembro\n");
    break;
case 10:
    mes = 10;
    printf("O mes digitado eh Outubro\n");
    break;
case 11:
    mes = 11;
    printf("O mes digitado eh Novembro");
    break;
case 12:
    mes = 12;
    printf("O mes digitado eh Dezembro");
    break;
default:
    printf("erro\n");

}



    return 0;
}
