#include<stdio.h>

int main(void)
{
    const int ano = 365;
    float principal, taxa_juros, dias, juros;
    
    printf("Informe o valor principal do empréstimo (-1 para terminar): ");
    scanf("%f", &principal);

    while (principal != -1)
    {

        printf("Informe a taxa de juros: ");
        scanf("%f", &taxa_juros);

        printf("Informe o prazo do empréstimo em dias: ");
        scanf("%f", &dias);

        juros = (principal*dias*taxa_juros)/ano;
        printf("O valor dos juros é de R$ %.2f", juros);

        printf("\nInforme o valor principal do empréstimo (-1 para terminar): ");
        scanf("%f", &principal);

    }
    

    return 0;
}