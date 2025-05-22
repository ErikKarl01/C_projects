#include<stdio.h>

int main()
{
    int interacoes, menor, valorAtual;

    scanf("%d", &interacoes);
    scanf("%d", &valorAtual);
    menor = valorAtual;

    for (int i = 0; i < interacoes-1; i++)
    {
        scanf("%d", &valorAtual);

        if (valorAtual<menor)
        {
            menor = valorAtual;
        }
    }
    
    printf("%d", menor);

    return 0;
}