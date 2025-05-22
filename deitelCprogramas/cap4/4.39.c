#include<stdio.h>

int main()
{
    int tarifax = 1230;  // 23% de imposto
    int valorFinal = 0;
    int valorFinalDecimais;
    int valorFinalInteiros;
    float valorDespesa;
    int numCategorias;

    printf("Escolha quantidade de categorias para gastos: ");
    scanf("%d", &numCategorias);

    for (int i = 0; i < numCategorias; i++)
    {
        scanf("%f", &valorDespesa);
        valorDespesa *= 1000;  // Multiplica por 1000 para lidar com precisão
        valorFinal += (int)(valorDespesa * tarifax) / 1000;  // Aplica a tarifa e converte para int
    }
    
    valorFinalInteiros = valorFinal / 1000;  // Separa a parte inteira
    valorFinalDecimais = valorFinal % 1000;  // Separa os decimais

    // Ajusta para garantir que a impressão tenha 2 casas decimais
    printf("Valor integral: %d,%03d", valorFinalInteiros, valorFinalDecimais);

    return 0;
}
