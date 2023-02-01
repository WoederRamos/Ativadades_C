#include <stdio.h>

int maior ();
int main()
{
    int valor;
    printf("Codigo para testar a funcao - maior \n");

    printf ("%d", maior());
    return 0;
}

int maior ( )
{   int valor;
    int maior_valor;
    int i;
    printf ("Entre com  um valor inteiro: ");
    scanf ("%d", &valor);
    printf("\n");
    maior_valor = valor;

    for (i = 1 ; i < 5; i++)
     {
         printf ("Entre com  um valor inteiro: ");
         scanf ("%d", &valor);
         printf("\n");
         if (valor > maior_valor)
            maior_valor = valor;

     }
    return maior_valor;
}
