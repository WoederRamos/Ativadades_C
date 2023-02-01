#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numdaconta;
    float SaldoIncDoMes, TotalDeEncargos, LimiteDeCredito, Saldo, TotalDeCreditos;
    numdaconta = 0;

    while(numdaconta != -1){
        printf("Insira o numero da conta(para encerrar o programa digite -1): \n", numdaconta);
        scanf("%d", &numdaconta);
        if (numdaconta == -1){
            break;
        }
        printf("Informe o saldo inicial: \n", SaldoIncDoMes);
        scanf("%f", &SaldoIncDoMes);
        printf("Informe o total de encargos: \n", TotalDeEncargos);
        scanf("%f", &TotalDeEncargos);
        printf("Informe o total de creditos: \n", TotalDeCreditos);
        scanf("%f", &TotalDeCreditos);
        printf("Informe o limite de credito: \n", LimiteDeCredito);
        scanf("%f", &LimiteDeCredito);
        Saldo = SaldoIncDoMes + TotalDeEncargos - LimiteDeCredito;

        if(Saldo > LimiteDeCredito){
        printf("Conta: %d\n", numdaconta);
        printf("Limite de credito: %.2f\n", LimiteDeCredito);
        printf("Saldo: %.2f\n", Saldo);
        printf("O limite de credito ultrapassado!\n");
        }

    }

    return 0;
}
