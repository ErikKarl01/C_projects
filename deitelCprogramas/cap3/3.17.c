#include<stdio.h>

int main(void){

    float quilometros_total = 0,
    consumo_total,
    litros_total = 0,
    consumo_atual,
    quilometros_atual, litros_atual;

    printf("Informe quantos litros abasteceu (-1 para ter￾minar):\n");
    scanf("%f", &litros_atual);
    printf("Informe quantos litros abasteceu (-1 para ter￾minar):\n");
    scanf("%f", &quilometros_atual);

    while (litros_atual != -1)
    {
        quilometros_total += quilometros_atual;
        litros_total += litros_atual;

        consumo_atual = quilometros_atual / litros_atual;
        printf("O consumo atual foi de %.2f\n", consumo_atual);

        printf("Informe quantos litros abasteceu (-1 para ter￾minar):\n");
        scanf("%f", &litros_atual);
        if (litros_atual != -1)
        {
            printf("Informe quantos km dirigiu:\n");
            scanf("%f", &quilometros_atual);
        }

    }

    consumo_total = quilometros_total / litros_total;
    printf("O consumo geral foi de %.2f\n", consumo_total);
    
    return 0;
}