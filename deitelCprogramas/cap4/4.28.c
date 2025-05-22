#include<stdio.h>

int main()
{
    int escolha;
    float salario;

    scanf("%d", escolha);

    while (escolha!=-1)
    {
        switch (escolha)
        {
            case 1:
                printf("Cargo de gerente, salário fixo de : 1200 semanal\n");
                break;
    
            case 2:
                float valorHora;
                int horasTrabalhadasSemanal; 
                int horasExedentes = 0;
                valorHora = 30.5;

                scanf("%d", horasTrabalhadasSemanal);

                if (horasTrabalhadasSemanal>=40)
                {
                    horasExedentes+=horasTrabalhadasSemanal-40;
                }
                
                salario = 40*valorHora + 1.5*valorHora*horasExedentes;

                printf("Funcionário por horas exedentes, salario semanal: %f", salario);

                break;

            case 3:
                float vendasSemana;
                scanf("%f", &vendasSemana);

                salario = 250.0 + 0.057*vendasSemana;
                printf("Salário comissionado, semanal: %.2f", salario);

                break;

            case 4: 
                int itensProduzidos;
                float valorPorItem;
                scanf("%d", &itensProduzidos);
                scanf("%f", &valorPorItem);

                salario = itensProduzidos*valorPorItem;

                printf("Vendedor por itens produzidos, salário semanal: %.2f", salario);

                break;

            default:
                break;
        }

        scanf("%d", escolha);
    }
    
    

    return 0;
}