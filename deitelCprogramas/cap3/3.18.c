#include<stdio.h>

int main(void)
{
    int numero_conta = 0;
    float saldo_inicial, total_encargos, total_credito, limite_credito, saldo_final;

    while (numero_conta != -1)
    {
        printf("Informe o número da conta (-1 para terminar): ");
        scanf("%d", &numero_conta);

        if (numero_conta != -1)
        {
            printf("\nInforme o saldo inicial: ");
            scanf("%f", &saldo_inicial);

            printf("\nInforme o total de encargos: ");
            scanf("%f", &total_encargos);

            printf("\nInforme o total de créditos: ");
            scanf("%f", &total_credito);

            printf("\nInforme o limite de crédito: ");
            scanf("%f", &limite_credito);

            saldo_final = saldo_inicial + total_encargos - total_credito;

            if (saldo_final > limite_credito)
            {
                printf("Conta: %d\n", numero_conta);
                printf("Limite de crédito: %f\n", limite_credito);
                printf("Saldo: %f\n", saldo_final);
                printf("Limite de crédito ultrapassado.");
            }
        }
        
        

    }
    
    return 0;
}