#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num, contador, resultado;

   printf("Informe o valor: ", num);
   scanf("%d", &num);

    for(contador = 0; contador <= 10; contador ++){
            resultado = num * contador;

    printf("%d x %d = %d\n", num, contador, resultado);
    }

    return 0;
}
