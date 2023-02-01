
#include <stdio.h>

int main()
{
    int Abastecimento, contador = 0;
    float kmPercorridos, litros, KmPorLitros, KmConsolidados = 0, totalLitros = 0, litroConsolidado;

    while(kmPercorridos != -1){

        printf("Insira os kmPercorridos(insira -1 para encerrar o programa): \n");
        scanf("%f", &kmPercorridos);
        if(kmPercorridos == -1){
            break;}
        printf("Insira a quantidade de litros: \n");
        scanf("%f", &litros);

        KmPorLitros = kmPercorridos / litros;

        printf("O valor de Km por litros é: %.2f\n", KmPorLitros);

        KmConsolidados = kmPercorridos + KmConsolidados;
        totalLitros = litros + totalLitros;
        litroConsolidado = KmConsolidados / totalLitros;

        contador++;

    }
    printf("O valor de Km consolidados é: %.2f\n", KmConsolidados);
    printf("O total de litros é: %.2f\n", totalLitros);
    printf("O valor de consolidado de km por litro é: %.2f\n", litroConsolidado);
    printf("O numero de vezes que carro foi abastecido é: %d\n", contador);

    return 0;
}
