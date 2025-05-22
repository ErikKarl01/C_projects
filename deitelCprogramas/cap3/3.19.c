#include<stdio.h>

int main(void) 
{
    float comissao, pagamento_total, valor_vendas;

    printf("Informe a venda em reais (-1 para terminar):\n");
    scanf("%f", &valor_vendas);

    while (valor_vendas != -1)
    {
        comissao = valor_vendas * ((float)9/100);
        pagamento_total = comissao + 200;

        printf("O pagamento é de: %.2f\n", pagamento_total);
        printf("Informe a venda em reais (-1 para terminar):\n");
        scanf("%f", &valor_vendas);
    }

    return 0;
}