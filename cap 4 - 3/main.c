#include <stdio.h>
#include <stdlib.h>

int main()
{
    int criancas, habitantes,obitos;
    float natalidade, mortalidade;

    printf("Insira o numero de criancas: \n");
    scanf("%i", &criancas);
    printf("Insira o numero de habitantes: \n");
    scanf("%i", &habitantes);
    printf("Insira o numero de obitos: \n");
    scanf("%i", &obitos);

    int opcao;
    printf("Insira a opcao: \n\t1.Natalidade\t2.Mortalidade\n");
    scanf("%i", &opcao);

    switch(opcao){
    case 1:
    natalidade = ((float)criancas * 1000 / habitantes);
    printf("A taxa de natalidade eh: %.2f%% \n", natalidade);
    break;
    case 2:
        mortalidade = ((float)obitos * 1000 / habitantes);
        printf("A taxa de mortalidade eh: %.2f%%\n", mortalidade);
        break;

    default:
        printf("Erro");


    }
    return 0;
}
