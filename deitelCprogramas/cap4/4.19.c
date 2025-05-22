#include<stdio.h>


int main()
{
    float total = 0;
    int opcaoProduto;
    int quantidadeVenndida;
    
    do
    {
        scanf("%d %d", &opcaoProduto, &quantidadeVenndida);

        if (opcaoProduto!=-1)
        {
            switch (opcaoProduto)
            {
            case 1:
                total += quantidadeVenndida*2.98;
                break;

            case 2:
                total += quantidadeVenndida*4.5;
                break;

            case 3:
                total += quantidadeVenndida*9.98;
                break;

            case 4:
                total += quantidadeVenndida*4.49;
                break;

            case 5:
                total += quantidadeVenndida*6.87;
                break;

            default:
                break;
            }
        }
        

    } while (opcaoProduto!=-1);
    
    printf("O total vendido foi de %.2f\n", total);

    return 0;
}