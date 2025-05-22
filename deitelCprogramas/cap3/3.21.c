#include<stdio.h>


int main(void)
{
    int horas_trabalhadas, horas_exedestes;
    float valor_hora, ganho_semanal, total_com_horaExtra = 0;

    printf("Digite # de horas trabalhadas (-1 para termi￾nar): ");
    scanf("%d", &horas_trabalhadas);

    while (horas_trabalhadas != -1)
    {
        printf("Digite o salário por hora do funcionário (R$00.00): ");
        scanf("%f", &valor_hora);

        if (horas_trabalhadas > 40)
        {
            horas_exedestes = horas_trabalhadas - 40;
            total_com_horaExtra = 1.5 * valor_hora * horas_exedestes; 
            horas_trabalhadas = 40;
        }

        ganho_semanal = horas_trabalhadas * valor_hora + total_com_horaExtra;

        printf("Salário é de %.2f\n", ganho_semanal);

        printf("Digite # de horas trabalhadas (-1 para termi￾nar): ");
        scanf("%d", &horas_trabalhadas);
        
    }
    

    return 0;
}