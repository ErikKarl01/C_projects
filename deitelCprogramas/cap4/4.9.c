#include<stdio.h>


int main()
{
    int interacoes;
    int soma = 0;
    int valorAtual;

    scanf("%d", &interacoes);

    for (int i = 0; i < interacoes; i++)
    {
        scanf("%d", &valorAtual);
        soma+=valorAtual;
    }
    
    printf("Soma: %d\n", soma);

    return 0;
}