#include <stdio.h>

int fat (int);
int main()
{
    int valor;
    printf("entre com um valor inteiro: ");
    scanf ("%d", &valor);
    printf ("%d", fat(valor));
    return 0;
}

int fat (int valor)
{
    if ((valor == 0)||(valor == 1))
        return 1;
    else
    {
        return (valor * fat (valor - 1));
    }

}

