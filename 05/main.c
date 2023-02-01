#include <stdio.h>
    #include <stdlib.h>

    int main(void)
    {
        printf("Correção do salario minimo\n");

        printf("\nInsira taxa de correção");

        float slmin, pct, txc, vlr;

        slmin = 1100;
        scanf("%f", &pct);
        txc = pct / 100;
        vlr = slmin * txc + slmin;

        printf("\nO valor total com aumento é: %.2f", vlr);
        return 0;
    }
