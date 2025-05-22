#include<stdio.h>


int main()
{
    int numeroConta;
    float limiteAntes;
    float limiteAtual;
    float saldoConta;

    for (int i = 0; i < 3; i++)
    {
        printf("Numerod a conta: \n");
        scanf("%d", &numeroConta);

        printf("Limite antes da recessao: \n");
        scanf("%f", &limiteAntes);

        limiteAtual=limiteAntes/2;

        printf("Saldo atual: \n");
        scanf("%f", &saldoConta);

        printf("Limite atual de crédito: %f\n", limiteAtual);

        if (saldoConta>limiteAtual)
        {
            printf("Seu saldo é mior que o limite atual;\nCliente: %d, saldo: %f\n", numeroConta, saldoConta);
        }
        
    }
    

    return 0;
}