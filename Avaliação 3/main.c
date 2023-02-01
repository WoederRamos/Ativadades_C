#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inc_telhado, Larg_da_base, Comprimento_Do_telhado, somador, total, Americana = 12.5;
    int opcoes, Romana = 16, Italiana = 14, Colonial_p = 24, Colonial_G = 16, Francesa = 16, Portuguesa = 17;
    while(Larg_da_base != -1){
    printf("Informe a Largura da Base(Para encerrar o programa insira -1): \n", Larg_da_base);
    scanf("%f", &Larg_da_base);
        if(Larg_da_base == -1){
            break;}
    printf("Informe o comprimento do telhado: \n", Comprimento_Do_telhado);
    scanf("%f", &Comprimento_Do_telhado);

    inc_telhado = Larg_da_base +(Larg_da_base * 30 / 100);

    somador = inc_telhado + Comprimento_Do_telhado;

    printf("Opção de telha 1- Romana\t2- Italiana\t3- Colonial P\t4- Colonial G\t5- Francesa\t6- Porutguesa\t7- Americana: \n", opcoes);
    scanf("%d", &opcoes);
    switch(opcoes){
        case 1:
            total = somador * Romana;
            printf("O número de telhas é: %.2f\n", total);
            break;

        case 2:
            total = somador * Italiana;
            printf("O número de telhas é: %.2f\n", total);
            break;
        case 3:
            total = somador * Colonial_p;
            printf("O número de telhas é: %.2f\n", total);
            break;
        case 4:
            total = somador * Colonial_G;
            printf("O número de telhas é: %.2f\n", total);
            break;
        case 5:
            total = somador * Francesa;
            printf("O número de telhas é: %.2f\n", total);
            break;
        case 6:
            total = somador * Portuguesa;
            printf("O número de telhas é: %.2f\n", total);
            break;
        case 7:
            total = somador * Americana;
            printf("O número de telhas é: %.2f\n", total);
            break;
        default:
            printf("Erro: Digite apenas valores de 1 a 7\n");
    }

    }

    return 0;
}
