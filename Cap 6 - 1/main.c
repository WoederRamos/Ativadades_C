#include <stdio.h>
#include <stdlib.h>

int potencia (int base,int expoente);
int main()
{
    int a, b, c;
    printf("Insira a base e o expoente: \n");
    scanf("%d%d", &a, &b);
    c = potencia(a,b);
    printf("O valor de %d elevado a %d = %d", a, b, c);
    return 0;
}
int potencia (int base, int expoente){
int resultado = 1;
if (expoente == 0){
    return resultado;
}
else if (expoente > 0){
    int i;
    for (i = 0; i < expoente; i++){
        resultado = resultado * base;
    }
}
return resultado;
}
