#include <stdio.h>
#include <stdlib.h>

int main()
{
    char genero;
    printf("Digite:\n\tM para masculino\tF para femenino\n");
    scanf("%c", &genero);

    if (genero == 'm','M'){
    printf("O genero eh Masculino\n", genero);
    }

    else if(genero == 'f','F'){
        printf("O genero eh femenino\n");
    }
    else{
        printf("O genero nao existe\n");
    }
    return 0;
}

