#define TRUE 1;
#define FALSE 0;

float raiz (int);
float absoluto (float);

int main()
{
    int valor;
    printf("Codigo para testar a funcao - raiz \n");
    printf("Entre com os valor: ");
    scanf ("%d", &valor);
    printf("O valor da raiz quadrada de %d = %.2f", valor, raiz (valor));
    return 0;
}
float raiz (int valor)
{

    float resultado = 0;
    float passo = 0.01;
    int processar = TRUE;
    while (processar)
    {
        if (absoluto ((resultado * resultado) - valor) <= 0.05)
        {
            processar = FALSE;
        }
        resultado = resultado + passo;
    }
        return resultado;
}

float absoluto (float valor)
{
    if  (valor < 0.0)
        return (valor * -1);
    else
        return valor;
}

