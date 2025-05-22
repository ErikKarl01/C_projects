#include<stdio.h>

int main()
{
    int valorAtual;
    int soma = 0;

    scanf("%d", &valorAtual);

    while (valorAtual!=9999)
    {
        soma += valorAtual;
        scanf("%d", &valorAtual);
    }
    
    
    printf("%d", soma);

    return 0;
}