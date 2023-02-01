#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = ' ';
    printf("Entre com uma letra: ");
    scanf("%c", &c);

    if (c >= 65 && c<= 90){
        printf("\nO complemento para essa letra eh: %c", c + 32);
    }
    else if(c >= 97 && c<= 122){
        printf("\nO complemento para essa letra eh: %c", c - 32);

    }
    else{
        printf("/nVoce nao digitou a letra");
    }

return 0;
}
