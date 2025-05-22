#include<stdio.h>


int main(void)
{
    int contador = 0, maior = 0, numero;

    while (contador < 10)
    {
        printf("Digite somente inteiros: %d:   ", 10 - contador);
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }

        contador++;
    }

    printf("Maior: %d", maior);
    

    return 0;
}