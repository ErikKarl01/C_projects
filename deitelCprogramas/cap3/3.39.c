#include<stdio.h>

int main(void)
{

    int numero, contadorDeSete = 0, valor_atual = 0;

    scanf("%d", &numero);

    while (numero > 0)
    {
        
        valor_atual = numero%10;

        if (valor_atual == 7)
        {
            contadorDeSete++;
        }
        
        numero /= 10;

    }

    printf("%d", contadorDeSete);    

    return 0;
}