#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  printf("Calacular o comprimento de uma circuferência/n");

  printf("Insira o valor para raio: ");

  float raio, comprimento;

  scanf("%f", &raio);

  comprimento = 2 *raio *3,14;

  printf("o comprimento do raio:%.2f", comprimento);

  return 0;

}
