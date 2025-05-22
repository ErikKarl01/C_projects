#include<stdio.h>

int main(void)
{
    int contador = 1, maior, segundo_maior, numero;

    while (contador <= 10)
    {
        printf("Digite %d valores inteiros: \n", 10 - contador + 1);
        scanf("%d", &numero);

        if (numero > maior)
        {
            segundo_maior = maior;
            maior = numero;
        }

        contador++;
        
    }

    printf("Maior: %d e segundo maior : %d", maior, segundo_maior);
    

    return 0;
}