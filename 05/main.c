#include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
        printf("Corre��o do salario minimo\n");

        printf("\nInsira taxa de corre��o");

        float slmin, pct, txc, vlr;

        slmin = 1100;
        scanf("%f", &pct);
        txc = pct / 100;
        vlr = slmin * txc + slmin;

        printf("\nO valor total com aumento �: %.2f", vlr);
        return 0;
    }
