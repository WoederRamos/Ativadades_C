#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float largura, comprimento, altura, volume_da_coluna, valor_de_colunas, perdas;

    printf("Insira a largura da coluna: \n", largura);
    scanf("%f", &largura);
    printf("Insira o comprimento da coluna: \n", comprimento);
    scanf("%f", &comprimento);
    printf("Insira a altura da coluna: \n");
    scanf("%f", &altura);

    volume_da_coluna = largura * comprimento * altura;
    valor_de_colunas = volume_da_coluna / 15;
    perdas = valor_de_colunas / 10;
    printf("O volume de cada coluna �: %.2fm�\n", volume_da_coluna);
    printf("O numero de perdas estimadas para cada coluna �: %.2fm�\n", perdas);
    return 0;
}
